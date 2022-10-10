#ifndef DOG_H
#define DOG_H




/**
 * struct dog - a dog {object} that hold diffrent data types
 * @name: name (first entry)
 * @age: age (second entry)
 * @owner: owner (last entry)
 *
 * Description: des
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
