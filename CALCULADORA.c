#include <stdio.h>

int main() {

    int opcao;
    float a, b, resultado;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                resultado = a + b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                resultado = a - b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);
                resultado = a * b;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%f %f", &a, &b);

                if(b != 0) {
                    resultado = a / b;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida!\n");

        }

    } while(opcao != 0);

    return 0;
}
