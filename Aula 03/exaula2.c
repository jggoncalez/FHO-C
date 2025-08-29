#include <stdio.h>

int main(){
    int numero;
    printf("Informe o número: ");
    scanf("%d", &numero);

    if ((numero%3 == 0) && (numero%5 ==0)){
        printf("FizzBuzz\n");
    } else if(numero%5 == 0){
        printf("Buzz");
    } else if (numero%3 == 0){
        printf("Fizz");
    } else {
        printf("...");
    }
}