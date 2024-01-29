#include<stdio.h>
#include<stdlib.h>


int main(){

    float sayi;
    float buyuk = 0;
    char devam;


    do
    {
        printf("Bir sayı giriniz: \n");
        scanf("%f",&sayi);

        if (sayi>buyuk)
        {
            buyuk = sayi;
            printf("Yeni büyük sayımız %.1f\n",buyuk);
        }
        else{
            printf("Büyük sayı değişmedi, büyük sayı hala %1.f.\n}",buyuk);
        }


        printf("Büyük sayıyı hesaplamaya devam etmek istiyormusunuz? [E/e]\n");
        scanf(" %c",&devam);
    } while (devam == 'e' || devam == 'E');
    

    
    printf("Program başarıyla sonuçlandı.\n");
    return 0;
}