#include <stdio.h>

int main(){
    float valor;
    int cont_positivos;

    do{
        scanf("%f", &valor);
        if(valor > 0){
            cont_positivos++;
        }
    }while(valor != 0);
        

    printf("%d valores positivos\n", &cont_positivos);
}