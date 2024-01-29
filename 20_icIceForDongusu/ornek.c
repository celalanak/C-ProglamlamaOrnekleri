#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    /*
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    */

    /*
    int i, j, k;
    printf("İ\tJ\tK\n");
    for (i = 1, j = 1, k = 1; i <= 10 || j <= 10 || k <= 10; i++, j++, k++)
    {
        printf("%d\t %d\t %d\n", i, j, k);
    }
    */

    // Çarpım Tablosu
    int i, l, k;

    for (i = 1; i <= 10; i++)
    {

        for (l = 1; l <= 10; l++)
        {
            k = i * l;
            printf("%dx%d=%d\t", i, l, k);
        }
        printf("\n");
    }

    return 0;
}