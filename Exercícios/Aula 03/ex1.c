#include <stdio.h>

int main(){
    double val1, val2, result;
    int op;

    printf("Digite 2 valores para o calculo (separado por espaço) ");
    scanf("%lf %lf", &val1, &val2);

    printf("Digite a operacao digitada\n 1. +\n 2. -\n 3. *\n 4. /\n");
    scanf("%d", &op);
 
    if (op == 1) {
        result = val1 + val2;
    } else if (op == 2) {
        result = val1 - val2;
    } else if (op == 3) {
        result = val1 * val2;
    } else if (op == 4) {
        if (val2 != 0) {
            result = val1 / val2;
        } else {
            printf("Erro -> Divisao por zero\n");
        }
    } else {
        printf("Erro -> Operacao invalida\n");
    }
    printf("Resultado: %.2lf\n", result);
}