#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    char *cp_value = NULL, *cp_key = NULL;
    hash_node_t *new;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);
    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
        return (0);
    strcpy(cp_key, key);
    if (cp_key == NULL)
    {   
        free(new);
        return (0);
    }
    strcpy(cp_value, value);
    if (cp_value == NULL)
    {
        free(new);
        free(cp_value);
    }

    

    new->key = cp_key;
    new->value = cp_value;
    new->next = NULL;
    idx = key_index((const unsigned char *)key, (*ht).size);
    

    if (ht->array[idx])
    {
        if (strcmp(ht->array[idx]->key, key))
        {
            ht->array[idx]->value = cp_value;
            free(new);
        }
    }
    if (ht->array[idx]->key)
    {   
        new->next = ht->array[idx];
        ht->array[idx] = new;
    }
    else
    {
        
        ht->array[idx] = new;
    }
    return (1);
}
