#include <stdio.h>

int main()
{

    float val, sum = 0;
    int i = 0;

    while (i < 2)
    {
        scanf("%f", &val);
        if (val < 0 || val > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            sum += val;
            i += 1;
        }
    }
    printf("media = %.2f\n", sum / 2);
}