# 0x13-more_singly_linked_lists

A singly linked list is a data structure that consists of a sequence of elements, where each element (node) stores both a value and a reference (or link) to the next node in the sequence. The last node typically points to a null reference, indicating the end of the list.

### Each node in a singly linked list has two main components:

- Value/Data: This component holds the actual value or data that the node is intended to store.
- Next Pointer/Reference: This component is a reference (pointer) to the next node in the list. It allows you to traverse the list by moving from one node to the next.

Singly linked lists are useful for dynamic data storage where elements can be efficiently inserted or removed from the beginning of the list. However, accessing elements in the middle or end of the list requires traversing through the nodes one by one.

### Some key operations you can perform on a singly linked list:

- Insertion: Add a new node to the beginning, middle, or end of the list.
- Deletion: Remove a node from the list, adjusting the references of adjacent nodes.
- Traversal: Traverse the list from the beginning to the end, accessing each node's value.
- Searching: Search for a specific value within the list.
- Length: Count the number of nodes in the list.

## How to use linked lists
Using linked lists involves creating, manipulating, and interacting with nodes to build and manage the list.

### Here's a step-by-step guide on how to use linked lists:

#### Define the Node Structure:
Decide what data you want to store in each node. Create a structure or class that includes a value/data field and a reference/pointer to the next node.

#### Create a Linked List:
Initialize the linked list by creating the first node. You can set the initial node as the head of the list.

#### Insertion:
You can insert nodes at the beginning, middle, or end of the linked list.

- Insert at the Beginning:
Create a new node, set its next pointer to the current head, and update the head to the new node.

- Insert at the End:
Traverse the list until you reach the last node, then create a new node and set it as the next of the last node.

#### Traversal:
To access the values of nodes, traverse the list using a loop.

#### Deletion:
Remove nodes from the list as needed.
- Delete a Node by Value:
Traverse the list, find the node with the specified value, and adjust pointers to skip over it.

#### Searching:
Search for a specific value in the list.
