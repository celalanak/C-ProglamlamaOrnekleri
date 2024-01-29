#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bakiye = 10264;
    float yatirilanTutar, cekilenTutar;
    int secim;

    while (secim)
    {
        printf("İşlem Menüsü\n--------------------\n");
        printf("1 - Para Çekme\n2 - Para Yatırma\n3 - Bakiye Bilgileri\n4 - Çıkış\n");
        printf("Lutfen bir secim yapınız\n");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
        tekrar:
            printf("Ne kadar çekmek istiyorsunuz?\n");
            scanf("%f", &cekilenTutar);

            if (cekilenTutar > bakiye)
            {
                printf("Çekmek istediğiniz tutar bakiyenizden fazla, %.2f değerinden daha az bir tutar giriniz.\n", bakiye);
                goto tekrar;
            }
            else
            {
                bakiye = bakiye - cekilenTutar;
                printf("Çekim işlemi başarılı, işlem sonrası bakiyeniz %.2f TL'dir.\n", bakiye);
            }
            break;
        case 2:
            printf("Ne kadar Yatırmak İstiyorsunuz?\n");
            scanf("%f", &yatirilanTutar);
            bakiye = bakiye + yatirilanTutar;
            printf("İşlem başarılı, işlem sonrası güncel bakiyeniz %.2f TL'dir.\n", bakiye);
            break;
        case 3:
            printf("Hesabınızda toplam %.2f TL. nakit para vardır.\n", bakiye);
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Yanlış Seçim Yaptınız, lütfen 1-4 arasında seçim yapınız.\n");
            break;
        }
    }

    return 0;
}