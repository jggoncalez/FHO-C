#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {

    char original[30], maiscula[30], minuscula[30];
    int tamanho, i;

    gets(original);
    tamanho = strlen(original);

    for(i = 0; i <= tamanho; i++){
        maiscula[i] = toupper(original[i]);
        minuscula[i] = tolower(original[i]);
    }

    printf("maiscula: %s\n", maiscula);
    printf("minuscula: %s\n", minuscula);
    printf("original: %s\n", original);


    return 0;
}