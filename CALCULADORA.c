#include <stdio.h>

int main() {
    int a, b, resultado;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    resultado = a + b;

    printf("Resultado da soma: %d\n", resultado);

    return 0;
}