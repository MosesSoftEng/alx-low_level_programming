#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE
/**
 * struct dog - dog details struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: a struct to save dog deatails
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

	int _putchar(char c);
	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
#endif