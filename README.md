# Домашнее задание к работе 7

## Условие задачи
Написать программу, которая для заданной стоимости покупки в копейках выводить текстовое сообщение, отображающие значение в рублях и копейках с правильным склонением слова «копейка».

## 1. Алгоритм и блок-схема

### Алгоритм
1. Начало программы.
2. Установка русской локализации.
3. Объявление целочисленных переменных `n`, `rub`, `kop`.
4. Ввод стоимости покупки в копейках `n`.
5. Вычисление количества рублей: `rub = n / 100`.
6. Вычисление количества копеек: `kop = n % 100`.
7. Вывод количества рублей.
8. Проверка последней цифры количества копеек с помощью switch:
- Если последняя цифра равна 1, проверить число `kop`:
  - Если `kop = 11`, вывести `«копеек»`.
  - В остальных случаях вывести `«копейка»`.
- Если последняя цифра равна `2`, `3` или `4`, проверить число `kop`:
  - Если `kop` равно `12`, `13` или `14`, вывести `«копеек»`.
  - В остальных случаях вывести `«копейки»`.
- В остальных случаях вывести `«копеек»`.
9. Завершение программы

### Блок-схема

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22Page-1%22%3E7V1Zd6I8GP41PWfmYnoIgQCXKmrdWtfaeoeASkWwiOuv%2F8KmgHYxomXmwwvFECK8efLk3RLvYGG2KVvSfNIwFVW%2FoyllcwfFO5qmGcjjD6dk65UAWmC9krGlKX7ZoaCj7VS%2FkPJLl5qiLiIVbdPUbW0eLZRNw1BlO1ImWZa5jlYbmXr0V%2BfSWD0q6MiSflza1xR74pXyNHcof1C18ST4ZYAE78xMCir7T7KYSIq5DhXB4h0sWKZpe0ezTUHVHekFcvGuK31wdn9jlmrYJy7oLVTrafjmyISmdGmIO8at5MtQGvuCuROpuxzjvOeL7rtXaf879P5W97cQ%2Fk3%2FNhb2NpDYaqFsKiI%2BBncwP9J0vWDqpuWegyX3hcvHlqRouJHgnGEa%2BPI8ltHcaWZhq4as6b%2BUV6EumrmxWGw3qR3sVLaiOqY6vfa4j5vL15fCtMDx1Sd2RtsKXXgf9wf0a72nreeTxcMSFF4f%2BpWnHlulH%2FV6pQAqhfeC8EA3pC2%2BeNDFb8PW5BVMJLB4epg86bnpfPeuWOX8rorlyNSe1VppAHMyQ3NNKA4e67g09%2FZecHsRir%2FxHc9NzbBdUbL5OxaX5l1Z5yV5OrbMpaHEntAtUx3ZUvjbxJ7pvqTWE81WO3NJdp5%2FjUcTLvNku1ItW92ExO33Rlk1Z6pt4WehJiEIQn%2BA%2BVcwPPS%2BByOQ5%2B%2F9GpIPgfG%2BoQN88IHf38HXEKASBRgkBhidASyFAKM5mC6AMcQAgxnAUggwyHLpAhhLDDAmA1gKAcYxKQMYRwwwlAEshQDjIUgXwARigPEZwFIIMARTxmCAIkaYkCEsBQgDwNOjDxyWNi0MXOCpyFwVqcSYwKRsngTktiTIjMlUYix1yj4g1%2FZBpu6nAmMMoCMYAxSk0wSxyDOd6XOlMoilE2KITxXELnDrZ379H4EYYFAEYxwHotoYmy6EketidAK62OgUwtatnjmuYPGXHoHayctSCUPFx5imbZ%2BVYm7AzaaN6kpE%2FUpexWdFWe0vOzXQy3emuc1k1pmVRGm17Y2et7Vhf1GXH6s8AG%2F13mCncVs2Nyg4bSojlBNeNy9PuYUFOLgrgHYFF49XuWKq8LU%2BxMwRAz6FFwAUkyp8IXJ8sRmD%2FQSD0WyUwQCkIhDjmXQxGLmmTyeg6WcMdiGDQQpFGYxO2QzJk%2BOLyxgsBWp%2B3K%2FP0ilzVkBySxJmlmQaIcYwdMogRu7Xh5lfP40QA1TKMsQgubMCZs6KNEAsrukDwHDXRRjScZW8oq0iwEDvSyefOz8yDfvPws1mz%2BEKYL45nMNHY%2F9TD%2Bp%2BqxF4zyHckHMl5Z4bSTNN33pnC5KuDS3NOyt73eGUW%2BPhLywb%2FHBU8PHbq6RoFn4uzTS8irpteeW6atuq9WeBe0kzxt5JKvhdXTPUP0FHuHflpJ2z3knTucT2bwh4jxh%2FaIwIQXQHIXWHIcFzwTF%2Bz%2FtD1BfM0IqLCveQJ62jYrcjgtIzR%2F%2F5jiSMVU2W9JyujbH0xJmmKM65vOQXyPhi1RGniauOdDft3zck8gfqSMALZQ26ypvZGBcr%2FdHEXlQbzV1FUWzhbSuBGjKeN9YcC2eIx0J%2Buylv20qjM1W24qhbQQ9MV5ThYPVm9aUO5NXJSmiPcOW3Fi02cT2bB4IqPkjyy3r9kIecOUIjdYwrLPWmDBmUF2sYMXRpM0WjhozWvfK8V3hhMd%2BUds5Qwk0X%2B6wgrPMvotWaTwZUcSZXCvVK0VqU%2BoXypgKZUl1pmQ%2FtdrFYem%2FPq%2BsW26AnlC03n%2FjWQ0Flqua2OrOXbHO9GygVu9qldnO7lnsulmarYjNXH8kIdZrMqDyZLViGWbZ3lWf8qJW%2B9fg%2Bfuk1mJr1WmY307ldYnM1U0LPa%2FQq6MxgtqqyO%2FF9tRvNC4%2BjfqsxVfovM332lJ8W6D7dKQwbc6QPx9KoPHovj0b2W7n1gM2p%2FEuhuxG05exxAvjUkiPrk2PIdqURjNqubNT7xlAZXaaQLq3l8M4JueHHpAznCPcFruvc21mMmImfSPxTcx4TP0sk%2FjMnpPP9NslMSAk4fd4GolJYVNYinpCqlvxWfa8v1AUHy7Xtbq28P1krJKwkkDcKtS3m9enTtsiuG2C6FIo5ZtDWnqrvltDA%2Bi6Tr6zE53ZPH%2BbqL7ndpDx%2Bagw2gjPjvLyWhjWzx2k9sTsCoN23NcZYW2PAPxu2bozGgyVVxV07eB125RHfWPFFfqSjpuOrXMAJbuHJnOzKdhvLuTQHjeFs9g5FJpdOMg981meQOc0I1zawUk0oP6PZ%2Bs8zt9SPHyd8y%2FiUNHNg4VcoSAsZjzEJn2qYhhk%2FHXrwg1CEuX3EobrzCH8UyZr%2BOqZTrBv89o6cc66m4Bcfzv8%2B%2BXwj3D5N%2FTL2hOiJwedF%2F1499nNPw%2F1p%2FJH%2FHaJGV0K3UOzPT2tPhkcTSIp%2FGzxgsqqMi8UOFsJgKQyf5ysVY6NEN6vv%2FW1RKk%2Bk5stq0kcN0H4Th62h2m2Mc6CBZsauZRrl5nrAwXUxB1s5zKsD2B3P8u1WXug8NZeTLl%2BSoebY%2F6hbHgB%2BOJLlqiI%2Fq2plbSqvL4%2Bg3WnYy9ZO4npW1aGGoghZiV6hJ3ysLudre8SX8WF%2BUGXEnbq1h3VOWLEcemhNDaqrFFPtPSDgVMj%2Bvzk1vUraYq3Z8uSX8fuqZMKcv4IhGTJJYP2DMcjXRbOFyaTdpOByyqyN3vJVrdbyVFsUa29QZysYTSWtKnfLXM2YPHfayrih6ui5IJZK9Z0FeptHqpLTO0W9X6P4SW2Rqy3KmvLMAvgiLNcPmOLtYvWtz7zQ89enqlovVUvaQF4t16g1UbeVndx72ZUcX0R%2FOZVH9FAY1ulWb8NM7bLcqBuO52E15VuGMXmyxFaayYNjzreuUUYe6SQPWVqo7smrcsf5UdJEuINJIMSacceNuYNjoqEMFl095p9xxyXcgfs85xxC%2FxMXMe5l12SUH4pZMAnELDJG%2BWFGEUDm7E8jn%2FiGzNScX9mUOX%2FDkmTIg8nI468jD0AJGXv8DezhZlbkIqPeeWfdLAt0VUJhz0%2FRS4RQ2ATy%2B7IMiiyDgiiDIq5VHbY2vQExnuS5kffcB2oImOtDgsRMZJxNkB%2BHmmjI%2BVGk0AFhuOm0MuTd8A1iR91ZZWKu%2BuJy%2Bdjpbt%2BLb8PG5g%2FKFKdMcSJWnBJz5BztBXwarP7iJFU52uH4GLHm0vK5g562urzINdf6Y31gvqzf%2BlMaN8YfQVs1lJyzwbIDYl1aLDQ5KutoJ6gbzX5xju8ZgfO%2Fv%2Fo1nWNxE6oobkNfmqqlYSE5g8QrM7DAIk05Ba9uAeU4Y7yCQ4Put234W7zJgBysserLJdi3eiXpSzXg3y8nDb%2B%2FLVWXbG0VlXoIKUE9Hyh%2F8H1z%2FCdrX91fxbJ2Err3FfwxEQLObNN0yu5Cefd0dIYSYj%2Fidbt%2F1RkN%2Be6nQ0Oe6I4acqG8F9YpdH8TyhwZlOHVUIuRBi9DLroWcoV%2FELnweMUIKXYhe9TUtdHLE6JXSBC9QnKcK0SQmwxqA136n0ItAxJDLYNujlqBDLVBTyaCWjbGuTQ5cp1e9zj7QLpsUqQbzIc3gi9Pc58sNP8Cvh8BLublY6kYqrwWT1%2FNUtQ9gJDav6J7rCEgOBOosH%2BRDQoUv0dGuBfQTUcFR50xKohHwIFtKSqmJ4To90LIghtA9kN4fok%2FRDH3DCTECRdv6yj75towgYTkeTF0fPIMk2UAHP6SaZ9y90iNAJFPBoifeFpSg07gTB0xeJJhE1DCFy1dG5oMITSZpKAZgyVzESzpu9iMjhKix5QDkEOxiY8YgEctXRmAPKlimRQ3xs0h6l7YG%2FdJmESupsn8RYrl92HIx%2FZsQ8cbNH8Xh%2FGmOPqoqSsDUQCEQEzKwvlDnZil0YUmDnslE%2BekCAF1C5o8GD4cpGNkdbHhQ1NcBId4BrmnP0Vu%2FAou%2Fk99X9QXzqwPKIa75%2FnzrgECukeRa74w4SAdlwOhlQZY5uj%2BY0RDPLC%2Fio3%2ByNq7s4OrHwdQgRNDcuOiIPgkDJ%2B6Mc1wNkgpyAbZv%2Be%2BjqtGVup5jHBRANXnix%2BIoCawJC%2BLoN4ludswPE6xgDHGP2K1fV7GdVMs0pJPAZA3zAEbfIbZwIlueTkW9P7gAzYYWqo0PTeNIpHxfv4mutl4%2FyfHO9z74EIDHjDRAc9TeyNgr8iw1D19w7QJQBEGmy93kIQtyr1zbW9REunxYZs38P%2BRhQC%2FbRGgm1oEAiQ3CD5UYQUqltpHwZgGe4aVe0%2BFAh9CbD7juXsAeCY4e1tPDKAII9Of93wCDhqWYsJgvSzyFzGCE4xZe1nPKfLN4NEADiG42O76FO%2BQCGAujMHxHH1PxVAMMIoRPAL5zVBM6FD83KORAIqFmJuRvSRnyJ0DYjEYNik3Y8qgjPi4N4Mj5N%2Bjluj4vqDXRmewWuZzrRdrUq79YFvmVI3pZmE11i8KdGFdHTmXfagz%2BytN6m4199%2Bm%2FZK2341MVI%2Be4AtV40h%2FzDvrWzDcHE0SWxpsHhy%2Bu8rl3LSwNm3g25c09yFVaWGv1YXtjg5bsqWh%2B6TUBxplaDAdAVFRR9JSt4mUTt%2FT9okKAdiYM48n2Zv4CAsnk2iDUZYIUaHkeOrgdA7CIZeEimMURXPJUNRpicLbKZsO%2FwofI4PI%2BQz2CD3tS%2F7CZwtoOmotIQTIeBLs%2FzoluBEQa%2BlqPttsoR%2FhliXX3bPkk%2FH2A%2B6cbCOTlLlzvrMAho4tgNnn7yXsxzkNVcI8l%2BtOtocs1GSsgvhs%2B8Vc%2B91p9barXxAQwMfAIJtY44uv%2BPMm1vjliCY0QADNCfcMx%2BzNcjp%2BW9fLejjdtyzZuPhU%2F0okXzE6LJjLcnKoqAcVt%2FfV2LhID73FopszssVYFNULOYBI83QACpj047auDVnuY4RmJvTPm9BUbCU8F%2FeWJ2dB899BQqD54VqSrqu6iTXEmSPi0OCOnAuN%2Bq9k67ZdMRaaovolI22jKh3XxDgt%2FU9TMYTQWYqog9BxBwE61kNxTYwTrtZDwr%2FWQ%2FtkmSv1DYq5ANDV%2Bia4m7Mjm8m5mnwX9kH5hRfkO15H%2BQ1cKLdSfmk2ca8SFejTe%2F%2B5v5qPUPsVAhXgbOUBxsNQwZ3cSndAn0D87%2BSj8IwR2GnJsxKMh8ABwT8EfbOL6Ey9%2B5vUu%2BN83uSgQLo4KbkZKrLk%2BCILNL42KbRbyRVM0JusmAutoN97MpIMhhxlf1G%2BT%2FHb8ZDYxBVf5v99t40QBz2KPW%2BqAyJ%2FeyL8UbiFKAk%2BiJTQh52ZQWiXZsBEt2n%2BThL81UIrP7a3WBZa%2BQdCK4C6Uo7saawmurVYUnP3sQ%2BZpS6bweObNEEuoTXvpwXB3XQGxwr9J5Ahm8HRUeIsCqb0b87gLPqwBQLXdbAB2CeNXdv%2B%2FJbv%2Bm%2ByP2%2FtDwMU%2FMRB8gG1ZUknCSedSN49DL0P2fswAlHc6J%2B6P9ma8vaKU%2FZvqWlUngj%2B2Y%2FEs0WuOhEmq8Oktl%2BJrwRy0j0DnwfZ4oqojhTaZO0aOtKN92Ul32bt21v7xXcNJ90iEDBJaTb4q2Wadrg6HpGThqk402jxPw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

Программа написана на языке **C++**.

```cpp
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
        printf("%d копеек ", kop);
    }

    return 0;
}
```
## 3. Результаты работы программы
```text
Введите стоимость покупки в копейках: 52189
Стоимость покупки: 521 руб. 89 копеек
```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
