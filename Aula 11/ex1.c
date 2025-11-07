#include <stdio.h>

int main(){

    typedef struct
    {
        float ladoa;
        float ladob;
        float perimetro;
        float area;
    } Figura;

    Figura retangulo;

    FILE *entrada = fopen("retang.in", "r");

    
    if(entrada == NULL){
        printf("Erro ao abrir arquivo!\n");
    }

    while(fscanf(entrada, "%f %f", &retangulo.ladoa, &retangulo.ladob) == 2){
        
        if(retangulo.ladoa == 0 || retangulo.ladob == 0){
            break;
        }
        
        retangulo.perimetro = retangulo.ladoa*2 + retangulo.ladob*2;
        retangulo.area = retangulo.ladoa * retangulo.ladob;
        printf("Área: %.2f\nPerímetro: %.2f\n", retangulo.area, retangulo.perimetro);
    }
    
    fclose(entrada);
    return 0;
}