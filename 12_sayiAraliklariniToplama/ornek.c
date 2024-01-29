#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2, terimSayisi,toplam = 0;

    int buyuk, kucuk;

    printf("Toplamak istediğiniz iki girin: \n");
    scanf("%d%d",&sayi1,&sayi2);

    // sonterim - ilkterim + 1

    terimSayisi = abs(sayi1 - sayi2) + 1; // abs mutlak değer işlemidir.

    // printf("%d ve %d sayıları arasında ki terim sayısı %d.",sayi1,sayi2,terimSayisi);

    if (sayi2 > sayi1)
    {
        buyuk = sayi2;
        kucuk = sayi1;
        while (terimSayisi > 0)
        {
            printf("%d\n",sayi1);
            toplam += sayi1;
            sayi1++;
            terimSayisi--;
        }
        
    }

    else if (sayi2 < sayi1)
    {
        buyuk = sayi1;
        kucuk = sayi2;
        while (terimSayisi>0)
        {
            printf("%d\n",sayi2);
            toplam += sayi2;
            sayi2++;
            terimSayisi--;
        }
        
    }
    else if (sayi1 == sayi2)
    {
        buyuk = sayi1;
        kucuk = sayi2;
        while (terimSayisi>0)
        {
            printf("%d\n",sayi2);
            toplam += sayi2;
            sayi2++;
            terimSayisi--;
        }
        
    }
    
    printf("%d ve %d sayılarının arasında ki sayıların toplamı %d.",kucuk,buyuk, toplam);
    
    
    

    return 0;
}