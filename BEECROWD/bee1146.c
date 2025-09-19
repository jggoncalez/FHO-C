#include <stdio.h>

int main(){
    int val, i;

    while(scanf("%d", &val) && val != 0) {
        for(i = 1; i < val; i++){
            printf("%d ", i);   
        }    
        printf("%d\n", val);
    }
}
