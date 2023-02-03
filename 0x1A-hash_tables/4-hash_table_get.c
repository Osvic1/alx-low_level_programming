#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return:the value associated with the element,or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{ unsigned long int index; /* Index of hash table */
hash_node_t *node; /* Node to iterate linked list */

/* Return NULL if the table, key or key value is invalid */
if (!ht || !key || !*key)
return (NULL);
/* Get index for the key */
index = key_index((unsigned char *)key, ht->size);
/* Return NULL if index is out of bounds */
if (index >= ht->size)
return (NULL);
/* Get the node at index */
node = ht->array[index];
/* Iterate linked list and return value if key matches */
while (node)
{
if (!strcmp(node->key, key))
return (node->value);
node = node->next;
}
/* Return NULL if key was not found */
return (NULL);
}
