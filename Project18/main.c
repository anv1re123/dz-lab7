#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int n, rub, kop;
   

    printf("Введите стоимость покупки в копейках: ");
    scanf("%d", &n);
    rub = n / 100;
    kop = n % 100;
    printf("Стоимость покупки: %d руб. ", rub);

    switch (kop % 10)
    {
    case 1:
        switch (kop)
        {
        case 11:
            printf("%d копеек", kop);
            break;
        default:
            printf("%d копейка", kop);
        }
        break;

    case 2:case 3:case 4:
        switch (kop)
        {
        case 12:case 13:case 14:
            printf("%d копеек", kop);
            break;
        default:
            printf("%d копейки", kop);
        }
        break;

    default:
        printf("%d ", kop);
    }

    return 0;
}