#include <stdio.h>

int main (){
    int distancia;
    float combGasto, total;

    scanf("%d", &distancia);
    scanf("%f", &combGasto);

    total = distancia/combGasto;

    printf("%.3f km/l\n", total);
}