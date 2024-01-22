#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - Dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description - Dogs properties
 */

struct dog
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
