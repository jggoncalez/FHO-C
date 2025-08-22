#include <stdio.h>

int main(){
    double raio, area;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    area = 3.14159 *  (raio*raio);
    printf("A=%.4lf\n", area);

    return 0;
}