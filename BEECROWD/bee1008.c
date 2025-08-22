#include <stdio.h>

int main(){
    int number, hours;
    float valH, salary;

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &valH);

    salary = hours*valH;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
}