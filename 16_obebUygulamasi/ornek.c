#include<stdio.h>
#include<stdlib.h>


int main(){

    int sayi1, sayi2,buyukSayi,kucukSayi,kalan;
    
    
    do
    { 
        printf("EBOB'unu öğrenmek istediğiniz pozitif iki sayı giriniz.\n");
        scanf("%d%d",&sayi1,&sayi2);

    } while (sayi1 <= 0 || sayi2 <=0);
    
    if (sayi1>sayi2)
    {
        buyukSayi = sayi1;
        kucukSayi = sayi2;
    }
    else{

        buyukSayi = sayi2;
        kucukSayi = sayi1;
    }
    
    kalan = buyukSayi % kucukSayi;

    while (kalan != 0)
    {
        if (kalan >= kucukSayi)
        {
            buyukSayi = kalan;
        }
        else{
            buyukSayi = kucukSayi;
            kucukSayi = kalan;
        }

        kalan = buyukSayi % kucukSayi;        
    }
    
    printf("EBOB (%d,%d) = %d",sayi1,sayi2,kucukSayi);
    return 0;
}