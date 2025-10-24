#include <stdio.h>

int main(){
    float notas[5];
    float media, soma, nota;
    int i;

    soma = 0;

    for(i=0; i<5; i++){
        printf("Informe a nota:\n");
        scanf("%f", &nota);
        notas[i] = nota;
    }

    for (i = 0; i < 5; i++){
        soma += notas[i];
    }

    media = soma / 5;

    printf("Media = %.lf\n", media);
}