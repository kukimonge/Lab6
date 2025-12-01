#pragma once

// Definimos la estructura "Person" para almacenar la información de una persona.
typedef struct {
    char name[50];   // Nombre de la persona.
    int age;         // Edad de la persona.
    double height;    // Altura de la persona (en centímetros).
} Person;

// --- Funciones de comparación con qsort() ---

// Función para comparar dos personas por nombre (alfabéticamente).
int compareByName(const void* x, const void* y);

// Función para comparar dos personas por edad (de menor a mayor).
int compareByAge(const void* x, const void* y);

// Función para comparar dos personas por altura (de menor a mayor).
int compareByHeight(const void* x, const void* y);

// Función para imprimir la información de una persona
void printPerson(const Person* p);

// Función para imprimir un arreglo de personas
void printArray(const Person* people, int size, const char* title);
