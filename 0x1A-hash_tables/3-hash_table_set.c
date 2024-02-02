#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update
 * @key: key of the elemnent
 * @value: value associated with the key
 * Return: 1 on success, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *value_copy;
	size_t idx, x;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_copy;
			return (1);
		}
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(value_copy);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = value_copy;
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;

	return (1);
}
