#include <stdio.h>

float calcularAreaTriangulo(float b, float h){
    float a = (b*h) / 2;
    return a;
}

void boasVindas(){
    printf("Calculando a área do triângulo\n");
}

int main(){
    float area, base, altura;
    
    boasVindas();

    scanf("%f %f\n", &base, &altura);

    area = calcularAreaTriangulo(base, altura);
    printf("%f\n", area);
    return 0;
}