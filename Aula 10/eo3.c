#include<stdio.h>

void calcularPesoIdeal(float altura, char genero, float *pesoIdeal){
    if(genero == 'M'){
        *pesoIdeal = 72.7 * altura - 58;
    }else{
        *pesoIdeal = 62.1 * altura - 44.7;
    }    
}

int main(){

    float altura, pesoIdeal;
    char genero;

    printf("informe a altura:\n");
    scanf("%f", &altura);
    Printf("informe o genero: M- masculino e F- feminino\n");
    scanf("%s",&genero);

    calcularPesoIdeal(altura, genero, &pesoIdeal);

    printf("peso ideal: %f\n", pesoIdeal);


return 0;

}