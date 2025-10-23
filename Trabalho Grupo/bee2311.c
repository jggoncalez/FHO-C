#include <stdio.h>
/*
EMILY NEVES - 119537
CAIO TOZZATO - 118269
GABRIEL FELIPE - 114582
JOÃO GONÇALEZ - 119474
YGOR BORTOLUCCI - 118861
*/

int main() {
    int numCompetidores;
    scanf("%d", &numCompetidores);

    for (int i = 0; i < numCompetidores; i++) {
        char nomeCompetidor[100];
        float grauDiff;
        float notas[7];

        scanf("%s", nomeCompetidor);
        scanf("%f", &grauDiff);

        for (int j = 0; j < 7; j++) {
            scanf("%f", &notas[j]);
        }

        for (int pass = 0; pass < 6; pass++) {
            for (int k = 0; k < 6 - pass; k++) {
                if (notas[k] > notas[k + 1]) {
                    float temp = notas[k];
                    notas[k] = notas[k + 1];
                    notas[k + 1] = temp;
                }
            }
        }

        float soma = 0;
        for (int j = 1; j < 6; j++) {
            soma += notas[j];
        }

        float resultado = soma * grauDiff;

        printf("%s %.2f\n", nomeCompetidor, resultado);
    }
}
