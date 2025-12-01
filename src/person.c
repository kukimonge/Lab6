#include <stdio.h>
#include <string.h>
#include "../include/person.h"

// Función para comparar dos personas por nombre (alfabéticamente).
int compareByName(const void* person1, const void* person2) {
    // Convertimos los punteros nulos a punteros de tipo Person (a través de casting).
    const Person* personA = (const Person*)person1;
    const Person* personB = (const Person*)person2;

    // Comparamos los nombres usando strcmp.
    return strcmp(personA->name, personB->name);
}

// Función para comparar dos personas por edad (de menor a mayor).
int compareByAge(const void* person1, const void* person2) {
    const Person* personA = (const Person*)person1;
    const Person* personB = (const Person*)person2;

    // Retornamos la diferencia de edades.
    return personA->age - personB->age;
}

// Función para comparar dos personas por altura (de menor a mayor).
int compareByHeight(const void* person1, const void* person2) {
    const Person* personA = (const Person*)person1;
    const Person* personB = (const Person*)person2;

    // Comparamos las alturas y retornamos un valor según corresponda.
    if (personA->height < personB->height) return -1;
    if (personA->height > personB->height) return 1;
    return 0; // Retornamos 0 si son iguales.
}

// Función para imprimir la información de una persona
void printPerson(const Person* person) {
    printf("Nombre: %-20s, Edad: %3d, Altura: %6.2f cm\n",
        person->name, person->age, person->height);
}

// Función para imprimir un arreglo de personas
void printArray(const Person people[], int size, const char* title) {
    printf("\n---- %s ----\n", title);
    for (int i = 0; i < size; i++) {
        printf("%d. ", i + 1);
        printPerson(&people[i]);
    }
}
