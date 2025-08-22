#include <stdio.h>

int main(){
    int nPc1, codPc1, nPc2, codPc2;
    float valPc1, valPc2, total;


    printf("Informe o código da peça 1: ");
    scanf("%d", &codPc1);
    printf("Informe a quantidade de peças 1: ");
    scanf("%d", &nPc1);
    printf("Informe o valor unitário da peça 1: ");
    scanf("%f", &valPc1);
    printf("Informe o código da peça 2: ");
    scanf("%d", &codPc2);
    printf("Informe o número de peças 2: ");
    scanf("%d", &nPc2);
    printf("Informe o valor unitário da peça 2: ");
    scanf("%f", &valPc2);

    total = nPc1 * valPc1 + nPc2 * valPc2;
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}