#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int buyukSayi, kucukSayi;
    printf("Birbirinin katý olduðunu öðrenmek istediðiniz 2 sayý giriniz, önce büyük sonra küçük sayý olacak þekilde: ");

    scanf("%d%d", &buyukSayi, &kucukSayi);

    if (buyukSayi % kucukSayi == 0)
    {
        printf("%d %d sayýlarý birbirinin çarpanýdýr.",kucukSayi,buyukSayi);
    }
    else
    {
         printf("%d %d sayýlarý birbirinin çarpaný deðildir.",kucukSayi,buyukSayi);
    }
    return 0;
}