#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*
    int x = 1, y = 1, z;

    printf("%d\n%d\n", x, y);
    for (int i = 0; i < 10; i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf("%d\n", z);
    }
    */

    // karekök alma

    int i;

    for (i = 0; i < 21; i++) // 0dan 21e kadar olan sayıların karekökünü yazdırdı.

    {
        printf("%d'nin karekökü %f.\n", i, sqrt(i));
    }

    return 0;
}