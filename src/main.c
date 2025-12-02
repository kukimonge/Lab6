#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/person.h"

// Función principal del programa para demostrar el uso de las funciones de comparación y ordenamiento utilizando qsort.
int main(void) {
    // Creamos un arreglo de personas con datos de ejemplo.
    Person people[10] = {
        {"John Smith", 28, 165.5},
        {"Sarah Johnson", 34, 175.0},
        {"Michael Brown", 22, 160.2},
        {"Emily Davis", 30, 180.3},
        {"David Wilson", 25, 170.8},
        {"Jessica Miller", 29, 172.4},
        {"Robert Taylor", 27, 168.9},
        {"Amanda Martinez", 31, 178.6},
        {"James Anderson", 24, 162.5},
        {"Jennifer White", 33, 177.1}
    };

    // Obtenemos el tamaño del arreglo en memoria.
    int size = sizeof(people) / sizeof(people[0]);

    // Imprimimos el arreglo original.
    printArray(people, size, "/// ARREGLO ORIGINAL ///");

    // Mostramos el arreglo ordenado según el nombre de las personas.
    qsort(people, size, sizeof(Person), compareByName);
    printArray(people, size, "--- ORDENADO POR NOMBRE (ALFABÉTICAMENTE) ---");

    // Mostramos el arreglo ordenado según la edad de las personas.
    qsort(people, size, sizeof(Person), compareByAge);
    printArray(people, size, "--- ORDENADO POR EDAD (DE MENOR A MAYOR) ---");

    // Mostramos el arreglo ordenado según la altura de las personas.
    qsort(people, size, sizeof(Person), compareByHeight);
    printArray(people, size, "--- ORDENADO POR ALTURA (DE MENOR A MAYOR) ---");

    return 0;
}
