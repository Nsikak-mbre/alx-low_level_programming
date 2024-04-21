#include "hash_tables.h"
/**
 * hash_table_set - Adds element to hash table
 * @ht: Pointer to table to be updated
 * @key: Key cannot be an empty string
 * @value: Value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *elem;

	if (key == NULL || strlen(key) == 0)
		return (0);

	index = hash_djb2((const unsigned char *)key)% ht->size;
	elem = malloc(sizeof(hash_node_t));

	if (elem == NULL)
		return (0);

	elem->key = strdup(key);
	if (elem->key == NULL)
	{
		free(elem);
		return (0);
	}

	elem->value = (value != NULL) ? strdup(value) : strdup("");
	if (elem->value == NULL)
	{
		free(elem->key);
		free(elem);
		return (0);
	}

	elem->next = ht->array[index];
	ht->array[index] = elem;
	return (1);
}
