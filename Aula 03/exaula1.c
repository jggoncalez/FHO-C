#include <stdio.h>

int main(){
    float nota;

    printf("Informe a nota: ");
    scanf("%f", &nota);

    if (nota >=5){
        printf("Aprovado\n");
    } else if (nota >=3){
        printf("RE\n");
    } else{
        printf("Reprovado");
    }
}