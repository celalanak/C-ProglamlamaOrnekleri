#include<stdio.h>
#include<stdlib.h>


int main(){

    int sayi;
    int basamakSaiyi = 0;
    int sayideğerleritoplami = 0;

    printf("Lütfen sayı değerlerinin toplamını öğrenmek isteiğiniz sayıyı giriniz: \n");
    scanf("%d",&sayi);
    

    do
    {
        sayideğerleritoplami += sayi % 10;
        basamakSaiyi++;

        sayi = sayi / 10;
    } while (sayi>0);

    printf("Girdiğiniz sayının değerleri toplamı %d.\n",sayideğerleritoplami);
    
    printf("Program başarıyla sonuçlandı.\n");
    return 0;
}