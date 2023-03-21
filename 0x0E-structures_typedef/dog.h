# ifndef DOG_H
# define DOG_H
/**
 * struct dog - Store information about the dog
 * @name:name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 *
 * Description: struct store information about
 * name of the dog,ageof the dog and owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -typedef struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

# endif
