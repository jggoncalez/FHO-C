#include <stdio.h>

int main(){
    float valor;
    int cont_positivos;

    scanf("%f", &valor);

    while(valor != 0){
        if(valor >0){
            cont_positivos++;
        }
    }

    printf("%d valores positivos\n", &cont_positivos);
}