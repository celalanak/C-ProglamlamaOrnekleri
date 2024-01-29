#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    printf("Faktörüyelini almak istediğiniz sayıyı giriniz: ");

    int sayi;
    int faktoriyelSonuc = 1;
    scanf("%d",&sayi);

    int kullanicininGirdiğiSayi = sayi;

    if (sayi>=0)
    {
        while (sayi>=0)
        {
        if (sayi == 0)
        {
            faktoriyelSonuc *= 1;
        }

        else
        {
            faktoriyelSonuc *= sayi;
        }
        sayi--;
        
        }
    }
    else
    {
        printf("Lütfen sıfır veya sıfırdan büyük sayı giriniz.");
    }
    

    
    
    printf("%d! = %d", kullanicininGirdiğiSayi,faktoriyelSonuc);
    return 0;
}