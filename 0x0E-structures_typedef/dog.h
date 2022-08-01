#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the defined structure
 * @name: variable char in pointer
 * @age: float variable
 * @owner: pointer variable of type char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* struct dog my_dog(char *name, float age, char *owner) */

/**
 * dog_t - the previous name to the new
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
/*void free_dog(dog_t *d);*/
#endif
