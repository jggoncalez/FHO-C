/*
EMILY NEVES - 119537
CAIO TOZZATO - 118269
GABRIEL FELIPE - 114582
JOÃO GONÇALEZ - 119474
YGOR BORTOLUCCI - 118861
*/

#include <stdio.h>

int main(){

    // Declaração de variáveis
    int qttTestes, qtt, qttC = 0, qttR = 0, qttS = 0, total, i;
    char tipoCobaia;

    // Entrada

    scanf("%d", &qttTestes);
    while (i < qttTestes){
        scanf("%d", &qtt);
        scanf("%c", &tipoCobaia);

        switch (tipoCobaia)
        {
        case 'C':
            qttC += qtt;
            i++;
            break;
        case 'R':
            qttR += qtt;
            i++;
            break;
        case 'S':
            qttS += qtt;
            i++;
            break;
        default:
            break;

        }
    }

    total = qttC + qttR + qttS;
    
    // Saída
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", qttC);
    printf("Total de ratos: %d\n", qttR);
    printf("Total de sapos: %d\n", qttS);
    printf("Percentual de coelhos: %.2f %%\n", total ? (qttC * 100.0 / total) : 0.0);
    printf("Percentual de ratos: %.2f %%\n", total ? (qttR * 100.0 / total) : 0.0);
    printf("Percentual de sapos: %.2f %%\n", total ? (qttS * 100.0 / total) : 0.0);

}