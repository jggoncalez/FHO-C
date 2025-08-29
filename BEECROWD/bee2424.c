#include <stdio.h>

int main(){
    // Limites da quadra (0,0) ~ (432, 468)
    int x, y;

    scanf("%d %d", &x, &y);
    if (x<0 || y<0 || x>432 || y>468){
        printf("fora\n");
    } else{
        printf("dentro\n");
    }
}