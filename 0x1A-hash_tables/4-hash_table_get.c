#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value of key or NULL if key is missing
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hashnode;
	size_t idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	hashnode = ht->array[idx];
	while (hashnode && strcmp(hashnode->key, key) != 0)
		hashnode = hashnode->next;

	return ((hashnode == NULL) ? NULL : hashnode->value);
}
