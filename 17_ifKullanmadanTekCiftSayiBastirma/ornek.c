#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 0; i < 20; i++)
    {
        /*if (i % 2 == 0)
        {
            printf("%d sayısı çift sayıdır.\n", i);
        }
        else
        {
            printf("%d sayısı tek sayıdır.\n", i);
        }*/
    }

    int biletsayisi = 100;

    for (; biletsayisi > 0; biletsayisi--)
    {
        printf("%d\t", biletsayisi);
    }

    return 0;
}