#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data of the dog
 * @name: the name of th puppy
 * @age: the age of th puppy
 * @owner: the owner of the puppy
 */
struct dog
{
char *name;
float age;
char *owner;
}
typedef struct dog carlin;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *pulldog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
