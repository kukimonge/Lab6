#pragma once

// Definimos la estructura "Person" para almacenar la información de una persona.
typedef struct {
    char name[50];   // Nombre de la persona.
    int age;         // Edad de la persona.
    double height;    // Altura de la persona (en centímetros).
} Person;

// --- Funciones de comparación para usar con qsort() ---
// NOTA: Estas funciones retornan un valor entero:
//  < 0 si el primer elemento es "menor" que el segundo.
//  = 0 si son iguales.
//  > 0 si el primer elemento es "mayor" que el segundo.

// Función para comparar dos personas por nombre (alfabéticamente).
int compareByName(const void* person1, const void* person2);

// Función para comparar dos personas por edad (de menor a mayor).
int compareByAge(const void* person1, const void* person2);

// Función para comparar dos personas por altura (de menor a mayor).
int compareByHeight(const void* person1, const void* person2);

// Función para imprimir la información de una persona
void printPerson(const Person* person);

// Función para imprimir un arreglo de personas
void printArray(const Person people[], int size, const char* title);
