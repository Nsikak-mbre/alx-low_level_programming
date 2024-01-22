#ifndef _DOG_
#define _DOG_
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct Dog - Dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct Dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
