#include <stdio.h>

int main(){
    int values[10];
    int valIns, valEqualMed = 0, soma = 0;
    float med;

    for (int i = 0; i < 10; i++){
        scanf("%d", &valIns);
        values[i] = valIns;
        soma += valIns;
    }

    med = (float)soma / 10;

    for (int i = 0; i < 10; i++){
        if (values[i] == (int)med){
            valEqualMed += 1;
        }
    }
    
    (valEqualMed > 0)? printf("Há %d valores iguais a média (%.0f)\n", valEqualMed, med) : printf("Não há valores igual a média (%.0f)\n", med);
}