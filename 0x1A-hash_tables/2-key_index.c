#include "hash_tables.h"
/**
 * key_index - Creates an index using object's key
 * @key: Object's key
 * @size: Object size
 * Return: Index at which key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t hash_value =  hash_djb2(key);
	size_t index  = hash_value % size;

	return (index);
}
