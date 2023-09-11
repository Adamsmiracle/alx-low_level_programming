#ifndef DOG_H
#define DOG_H

/**
  * struct dog - structure about the details of a dog
  * @name: member
  * @owner: member
  * @age: member
  *
  * description
*/

struct dog
{
	char *name;
	int age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif


