#include <stdio.h>

int main(){
    int X, soma_pares, i;

    printf("Informe um valor:\n");
    scanf("%d",&X);

while (X != 0) {
    if (X % 2 == 0) {
        X++;
    }
    soma_pares = 0;
    for (i = 1; i < 5; i++) {
        soma_pares = soma_pares + X;
        X = X + 2;
    }

    printf("%d\n", soma_pares);
    printf("Informe um valor (0 para sair):\n");
    scanf("%d", &X);
}