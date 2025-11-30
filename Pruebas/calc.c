#include <stdio.h>

float sumar(int a, int b) {
    return a + b;
}

float restar(int a, int b) {
    return a - b;
}

float multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    return (float)a / b;
}

int main() {
    float num1, num2;
    char op;

    printf("Introduce el primer número: ");
    scanf("%f", &num1);

    printf("Introduce el segundo número: ");
    scanf("%f", &num2);

    printf("Elige una operacion (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Resultado: %.2f\n", sumar(num1, num2));
            break;

        case '-':
            printf("Resultado: %.2f\n", restar(num1, num2));
            break;

        case '*':
            printf("Resultado: %.2f\n", multiplicar(num1, num2));
            break;

        case '/':
            if (num2 == 0)
                printf("No se puede dividir entre 0.\n");
            else
                printf("Resultado: %.2f\n", dividir(num1, num2));
            break;

        default:
            printf("Operación no válida.\n");
    }

    return 0;
}

