#include <stdio.h>

int main(){
    double val1, val2, result;
    int op;

    printf("Digite 2 valores para o calculo (separado por espaço) ");
    scanf("%lf %lf", &val1, &val2);

    printf("Digite a operacao digitada\n 1. +\n 2. -\n 3. *\n 4. /\n");
    scanf("%d", &op);
 
    switch(op){
        case 1: result = val1 + val2; 
            break;
        case 2: result = val1 - val2; 
            break;
        case 3: result = val1 * val2; 
            break;
        case 4: 
            if (val2 == 0){
                printf("Erro -> Divisão por 0\n");
            } else {
                result = val1 / val2;
            }
        default: printf("Erro -> Operacao Inválida\n"); 
            break;
    }
    printf("Resultado: %.2lf\n", result);
}