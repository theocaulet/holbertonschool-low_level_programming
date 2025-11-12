#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Description: Ce type de structure permet de stocker
 * les informations de base sur un chien.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
