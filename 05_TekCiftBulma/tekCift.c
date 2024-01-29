#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    printf("Bir sayý girin: ");
    int sayi;

    scanf("%d", &sayi);

    if (sayi %2  == 0)
    {
        printf("Girdiðiniz sayý %d, kalaný sýfýr olduðundan çifttir.", sayi);
    }

    else
    {
        printf("Girdiðiniz sayý %d, kalaný bir olduðundan tektir.", sayi);
    }

    return 0;
}