#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut, i, j;

    printf("Boyut giriniz:");
    scanf("%d", &boyut);

    if (boyut % 2 == 0)
    {
        boyut++;
    }

    int control = boyut / 2;

    for (i = 0; i < boyut; i++)
    {
        if (i == boyut / 2)
        {
            for (j = 0; j < (boyut / 2) + 1; j++)
            {
                printf("*");
                printf(" ");
            }
            printf("\n");
        }
        else
        {
            for (j = 0; j < control; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }
    return 0;
}
