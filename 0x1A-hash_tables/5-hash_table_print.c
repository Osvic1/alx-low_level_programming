#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table
 * @ht: Pointer to the hash table
 * @key: Key to get the value of
 *
 * Return: Value associated with the key or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    /* Check if ht, key or key value is invalid */
    if (!ht || !key || !*key)
        return (NULL);
    /* Get the index of the key */
    index = key_index((unsigned char *)key, ht->size);
    /* Check if index is out of bounds */
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

