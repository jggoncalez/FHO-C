#include <stdio.h>

int main() {
    int matrizA[3][4];
    int matrizB[3][4];
    int matrizR[3][4];
    int value;

    for(int i = 0; i<3; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &value);
            matrizA[i][j] = value;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &value);
            matrizB[i][j] = value;
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 4; j++){
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizR[i][j]);
        }
        printf("\n");
    }
    

}