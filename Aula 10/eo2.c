#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2){
    float d;
    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    return d;
}


int main(){

    float x1, y1, x2, y2, distancia;

    printf("Informe o valor de X1:\n");
    scanf("%f", &x1);
    
    printf("Informe o valor de Y1:\n");
    scanf("%f", &y1);
    
    printf("Informe o valor de X2:\n");
    scanf("%f", &x2);
    
    printf("Informe o valor de Y2:\n");
    scanf("%f", &y2);

    distancia = calcularDistancia(x1, y1, x2, y2);
    printf("Distancia = %f\n", distancia);
}