/*
 * SISTEMA DE GESTIÓN DE ESTUDIANTES
 * Explicado paso a paso
 */

#include <stdio.h>   // Para printf (imprimir en pantalla)
#include <string.h>  // Para strncpy (copiar textos)

// ============================================
// PARTE 1: CONSTANTES
// ============================================
// #define crea "constantes" - valores que no cambian
// Es como dar un nombre a un número para no repetirlo

#define MAX_ESTUDIANTES 50   // Máximo 50 estudiantes
#define MAX_NOMBRE 100       // Nombres de hasta 100 caracteres

// ============================================
// PARTE 2: ESTRUCTURA (struct)
// ============================================
// Una estructura es como una "ficha" que agrupa datos relacionados
// Imagina una ficha de estudiante con varios campos

typedef struct {
    int id;              // Número identificador (entero)
    char nombre[100];    // Texto para el nombre (array de caracteres)
    float notas[3];      // 3 notas (array de decimales)
    float promedio;      // Promedio calculado (decimal)
} Estudiante;
// "typedef" nos permite usar "Estudiante" como tipo de dato
// Ahora podemos crear variables así: Estudiante alumno1;

// ============================================
// PARTE 3: FUNCIONES
// ============================================

// FUNCIÓN 1: Calcular el promedio
// El asterisco (*) significa que recibimos un PUNTERO
// Un puntero es la "dirección de memoria" donde está el estudiante
// Así podemos MODIFICAR el estudiante original, no una copia

void calcularPromedio(Estudiante *estudiante) {
    // estudiante->notas[0] significa: "accede a notas[0] del estudiante"
    // La flecha (->) se usa con punteros
    
    float suma = estudiante->notas[0] + 
                 estudiante->notas[1] + 
                 estudiante->notas[2];
    
    estudiante->promedio = suma / 3.0;
}

// FUNCIÓN 2: Encontrar el mejor estudiante
// Recibe un ARRAY de estudiantes y la cantidad
// Retorna el ÍNDICE (posición) del mejor, o -1 si no hay ninguno

int encontrarMejorEstudiante(Estudiante estudiantes[], int cantidad) {
    // Si no hay estudiantes, retornamos -1
    if (cantidad == 0) {
        return -1;
    }
    
    int mejorIndice = 0;  // Asumimos que el primero es el mejor
    float mejorPromedio = estudiantes[0].promedio;
    
    // Recorremos desde el segundo (i=1) hasta el último
    for (int i = 1; i < cantidad; i++) {
        // Si encontramos uno mejor, actualizamos
        if (estudiantes[i].promedio > mejorPromedio) {
            mejorPromedio = estudiantes[i].promedio;
            mejorIndice = i;
        }
    }
    
    return mejorIndice;
}

// FUNCIÓN 3: Imprimir datos de un estudiante
// Recibe un puntero para no copiar toda la estructura (más eficiente)

void imprimirEstudiante(Estudiante *est) {
    // printf muestra texto en pantalla
    // %d = número entero
    // %s = texto (string)
    // %.1f = decimal con 1 dígito después del punto
    // %.2f = decimal con 2 dígitos después del punto
    // \n = salto de línea
    
    printf("ID: %d | Nombre: %s | Notas: %.1f, %.1f, %.1f | Promedio: %.2f\n",
           est->id,
           est->nombre,
           est->notas[0],
           est->notas[1],
           est->notas[2],
           est->promedio);
}

// FUNCIÓN 4: Agregar un estudiante al array
// El parámetro int *cantidad es un puntero para poder INCREMENTARLO

void agregarEstudiante(Estudiante estudiantes[], int *cantidad,
                       int id, const char *nombre,
                       float n1, float n2, float n3) {
    
    // Verificar que hay espacio
    if (*cantidad >= MAX_ESTUDIANTES) {
        printf("Error: Límite alcanzado\n");
        return;  // Salir de la función sin hacer nada
    }
    
    // &estudiantes[*cantidad] obtiene la DIRECCIÓN del elemento
    // *cantidad es el valor actual (ej: si hay 2, apunta al índice 2)
    Estudiante *nuevo = &estudiantes[*cantidad];
    
    // Llenar los campos
    nuevo->id = id;
    strncpy(nuevo->nombre, nombre, MAX_NOMBRE - 1);  // Copia segura
    nuevo->nombre[MAX_NOMBRE - 1] = '\0';  // Asegurar fin de texto
    nuevo->notas[0] = n1;
    nuevo->notas[1] = n2;
    nuevo->notas[2] = n3;
    
    calcularPromedio(nuevo);  // Calcular su promedio
    
    (*cantidad)++;  // Incrementar el contador
}

// ============================================
// PARTE 4: FUNCIÓN PRINCIPAL (main)
// ============================================
// Todo programa en C empieza ejecutando main()

int main() {
    // Crear un array que puede guardar hasta 50 estudiantes
    Estudiante clase[MAX_ESTUDIANTES];
    
    // Contador de cuántos estudiantes hay realmente
    int numEstudiantes = 0;
    
    // Agregar estudiantes de prueba
    agregarEstudiante(clase, &numEstudiantes, 1, "Ana García", 8.5, 9.0, 7.5);
    agregarEstudiante(clase, &numEstudiantes, 2, "Carlos López", 6.0, 7.5, 8.0);
    agregarEstudiante(clase, &numEstudiantes, 3, "María Rodríguez", 9.5, 9.0, 10.0);
    agregarEstudiante(clase, &numEstudiantes, 4, "Pedro Martínez", 5.5, 6.0, 7.0);
    
    // Imprimir todos
    printf("=== LISTA DE ESTUDIANTES ===\n\n");
    for (int i = 0; i < numEstudiantes; i++) {
        imprimirEstudiante(&clase[i]);  // &clase[i] = dirección del elemento i
    }
    
    // Encontrar y mostrar el mejor
    printf("\n=== MEJOR ESTUDIANTE ===\n");
    int mejorIdx = encontrarMejorEstudiante(clase, numEstudiantes);
    
    if (mejorIdx >= 0) {
        printf("El estudiante con mejor promedio es:\n");
        imprimirEstudiante(&clase[mejorIdx]);
    }
    
    return 0;  // Indica que el programa terminó correctamente
}
