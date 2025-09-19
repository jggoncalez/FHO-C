#include <stdio.h>

int main(){

    float val, sum = 0; 
    int i = 0;

    while(scanf("%f", &val) && val > 0){
        sum += val;
        i += 1;
    }

    printf("%.2f\n", sum/i);

}