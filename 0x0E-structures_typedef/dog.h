#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - new type
  * @name: name of poppy
  * @age: age
  * @owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* a new type */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* _DOG_H_ */
