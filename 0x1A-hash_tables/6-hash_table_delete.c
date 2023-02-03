#include "hash_tables.h"

/*
* hash_table_delete - Deletes a hash table
* @ht: A pointer to a hash table
*/
void hash_table_delete(hash_table_t *ht)
{
/* Check if the hash table is already NULL */
if (ht == NULL)
{
return;
}

/* Loop through all buckets in the array */
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
/* Get the head of the linked list in the current bucket */
hash_node_t *node = ht->array[i];

/* Free all nodes in the linked list */
while (node != NULL)
{
hash_node_t *tmp = node->next;

/* Free the key, value, and node */
free(node->key);
free(node->value);
free(node);

node = tmp;
}
}

/* Free the array of buckets */
free(ht->array);

/* Free the hash table */
free(ht);
}
