#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    char isim[20] = {};
    char soyIsim[20] = {};

    printf("İsminiz: \n");
    scanf("%s", &isim);

    printf("Soyisminiz: \n");
    scanf("%s", &soyIsim);

    printf("Merhaba %s %s", isim, soyIsim);
    */

    /*
    int sayi[] = {1,2,3,4};

    for(int i=0;i<4;i++)
    {
        sayi[i] = !sayi[i];
    }
     for(int i=0;i<4;i++)
    {
        printf("%d ",sayi[i]);
    }
    */

    int acik[10] = {0};

    int tur, kapi;

    for (tur = 0; tur < 10; tur++)
    {
        for (kapi = tur; kapi < 10; kapi = kapi + tur + 1)
        {
            acik[kapi] = !acik[kapi];
        }
    }

    printf("Açık kapılarımız şunlardır: \n");

    for (kapi = 0; kapi < 10; kapi++)
    {
        for (kapi = 0; kapi < 10; kapi++)
        {
            if (acik[kapi])
            {
                printf("%d ", kapi + 1);
            }
        }
    }

    return 0;
}