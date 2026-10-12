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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22Page-1%22%3E7V3bdqq8Fn6ajvHvi7UGIeF0qaLWU61aq%2FUOBRVFsYjHp99BQCW4rFCktKUXVkKIMPPN80x4gLnZtmhIi3FNlxXtgabk7QMUH2gaMpDB%2F6yWnd0CeI63W0aGKjttp4aWulecRsppXamysvR0NHVdM9WFt3Ggz%2BfKwPS0SYahb7zdhrrm%2FdWFNFJ8Da2BpPlbO6psju1WnuZO7Y%2BKOhq7vwxYwT4zk9zOzpMsx5Ksb86aYP4B5gxdN%2B1vs21O0SzquXSxryv84%2Bzxxgxlbl64oL1UjHp%2FYtGEpjSpjyfm0MmhoTRyCPMgUg8ZZH1m84dPu9Pxd%2BjjrR5v4fw3ndtYmjuXYuulvC2J%2BDt4gNmhqmk5XdONwzlYOPzh9pEhySoexD031%2Bf48iym0cIaZmkq84Gq%2FSe%2FCVVRz4zEfPOZ2sNWaScqI6rVbo46eLhsdSVMcxxfrjMz2pTp3Puo06Pfqm11sxgvH1cg9%2FbYKdXbTJl%2B0qqlHCjl3nPCI12Tdvji3gv%2B6DfGb2AsgWX9cVzXMtPF%2Fl02itl9GdMRVV6VSqEHMwNEc89Q7D1VcWtm8p47zCIU%2F4fveKGrc%2FNASib7wODW7IHWWWkwHRn6ai4TT3hoUyzaUvhobM40h1KbsWoqrYU0sJ5%2Fg7kJt9m0XSuGqWzPyO3MRlHRZ4pp4GehxmcQdFnOuQLx0D4%2BciD%2F1%2BkhORAYHQc6wQd%2FcebbPTwDVKQAg6EBRqcASyDAaA4mC2AoNMBgCrAEAgwyXLIAxoQGGEoBlkCAcShhAONCA4xNAZZAgPEQJAtgQmiA8SnAEggwFiZMggEqNMKEFGEJQBgAth19kmFJs8LAJyIVaagikRgTUML0JAjvS4LUmUwkxhJn7IPw1j5Izf1EYAwB2oMxQEE6SRDzPFPAmCuVQiyZEGP5REHsE2H9NK7%2FJRADiPVgjOOA1xpjkoWw8LYYHYEtNryEsE2jrY9KmPyFJ6C0sgOpgKHiYExVd69yPtPjZtNaeS2ynVJWwWfFgdJZtSqgnW1NM9vxrDUriNJ61x6%2B7ir9zrI6eCrzAEyq7d5e5XZMppezxpSHbEZ423brmaUBOLjPgWYJN4%2FWmXyi8LU55cxZBK7CCwAKJQpfbHh8MakE%2BwoJRjNeCQYg5YEYj5IlwcJb%2BnQEln4qwT4pwSDFeiUYnTANyYfHF5dKsASY%2BWRcn6ETFqyA4T1JmHqSSYQYQnTCIBY%2Brg%2FTuH4SIQaohFWIwfDBCpgGK5IAMdLSBwBx90UYq%2BEuWVlde4DBvq%2Bseu7sUJ%2Bbf5aHavYM7gAW29M5%2FG3k%2FNfcvjcNAv9yLB7IupI6nBtKM1Xb2Wdzkqb2DdU%2BO7Cnw2o3Rv3%2FMG3ww1Huv%2F%2FZnWTVwM%2Bl6nO7o2YadrummKZi%2FFniWVLnI%2Fsk5f6ups6VP%2B5EHO7KKjtn7JO6dYnp3BCwH5F8aIwIQTwwIfWAIcFz7nf8mXVY1CFM3yBJhWfIppav%2BTARbmtA7g8eSMJYVQeSltHUEaaeOFNl2TqXlZyGAb5Yscip465D7VD27zgS2ZPoiCAKZfRe5IleG%2BVLneHYXJZrz%2FuSLJvCZCeBCjt%2F3RoLTJw%2B5oXsblvcNeVaayrvxOFLiX1EL%2BIA9tYToyO1IK%2BM10JziDtPGrT4jPuZPBAU8VEadDebxyzk9CE7VEa4w0p7HkDEZsUKRgxd2E7ZYW3AbtrFRTvXZbC8KewtVsJD5zuMIGyyXdFoLMY9Kj8blHLVUt5YFjq54rYEUaEqN%2FTHZjOfL7w3F%2BVNg6nRY8ocPNf5xmNOQWV9V56ZK%2BZ5s%2B%2FJJbP8Qu0XZiXzmi%2FM1vnnTHU4YNnWMxoWx7Mlg9CquS%2B94kctdYyn91G3XUMV463IbKcLs8BkKrrEvm7YN0FDvdm6zOzF9%2FV%2BuMg9DTuN2lTudGfarJ6d5ugO3cr1awtW64%2BkYXH4XhwOzUmx8YjdqWw397IV1NXsaQz4xApHxhGOZ74rzUKv78p4o2%2BISsVlAsWlseo%2FWCk3%2FJjU3PqG5wL3te4tkERMyR%2BK%2FFN9QZCfCUX%2BgAopeNwmGoUUQdBn0hPl3LK0EbFCKhuDSfm9ulSWHCxWdvuN%2FF431qywlkB2nqvssFyf1nd5ZlMD05WQz6BeU62X3w2hhu1dlC2txddmW%2Btnqt3Mflwc1Wu9rWBpnO5boV%2FR25zaFl%2BGADQ7pormG2ME%2BNe5qc2Ho96KKuOp7b31XwZDvrbm8%2FxQY5%2BtWOUSjvEIdX28L5pNTOfCAtT6s9k7FFEmmcLcjVkHEOY0Eu7tYF0XKB%2BKj6FNl1M%2FVyD880LM4POgcucSO0NnaWLhjFftsWMwNVHwcFkknI0iiLXNe1nspTZGectLhasp2szbqzelXMlSTVGsTKDGlLDeKKjlwUuRq8zHr62mPKopGvuaEwuF6t4A7e0TVcporbzWqVD8uLLMVJZFVX5lAOwKq80jZlAzX550UJdevNXLSrVQLqi9wXq1YRtjZVfaD9rdfcEyaDur6WBI94V%2BlW60t2hqFge16twyX9dTvjGfj%2BuG2Eiy%2F8qhwFwN2VhstGRwKB2CQwPy4he5fSgCty%2FlxZh5URC88SWG%2F1L9mhrs18JLGQ%2FTW5%2FMIdTE3lW3M8HzFJHIEyaCJEcaRkrDSKHCSLRABt4ZKhIrxbffycusNNbXHXG1emq97N7zk35t%2B4d1CjAU2beLi5%2Fx9JXhmDT0tPHCi9zzRnuq9vTuZtKZ0ngw3sehylzOWJvIWLyoSculOvCS2jsHylY1u9b3v0jgnOM3p6f1XdyedRR3ZwfPiqFiIlm8brfNMcE8Q1kNb4cGiqLdhtOAh6Pd%2BRE5pCvOjJHiplCc511L2kpx9c6HmHBm11A0yVTXXqqfAcXt5%2BDkD75vjr9S33f4VUxrK2l17OCwxBlwZttnq%2B3hLLdIe%2FEnED9iT7tzVYCBHPvwNJBNOt9ABygfiXUJ3T4oX0SfWzp0XWW4ghv3kjRN0XQs4GeW8Dibbc%2B5MxhcFAxnYD6MXZovVVl5cHfv2SrunkzgJEXO8GLpwXN1W3DVLf4Uzs5SoQSQ6%2FCc4QrQXmAh%2Bliu4JpmIQSQb4q08mO5%2FlypTCfTYb%2FDdKtqQfvjprEjkTaM4Jc2eNyWc6gb5lgf6XNJy59aCXlz6lPVD36TNUcTbF7tnDmTVqbunWO%2FFLj4pK7k%2F1A0XBQDnyH8VVr9HN5gnLN34grutHDSXREeBVdcVptXmOB7Ts654OLvNUWAoxAxRwJztzniftoc3ZmBrOAbMTvAZ1rcMD2pgx%2Bxgy%2FZ99C3%2Fw3sf%2FOYK0auuA9p1i7N2tnuhE%2FGfBTfB9HUYNyoEYRwtixEfrM1tJPMnznJ1F9BYD7jKDOkmwyjcZOvxgri8p2vrCuJynMWiIh2WMcZIGKg6Bzny74KHRLJUYZ7AIFk9LmQDzzHsjX%2FMKKYj7uC6UfFfCBNCM6w0IXucVzQDRlQQH5bIjx02fNIpSs2oxHCH2D2RlnLxCxrESJQcA%2FMIrI%2B%2FXbMEkvCSN1wb8yiL8YscCPgR3HLUJ%2BKsDOngPotqL1R0n4urhYRlK%2BmqT%2BA8mX48RSNtZEXyhRFAM0e9PIALPImjKAQUnizvHcgxBDhx9CM8GOr3r6q7O0KL6S1cGn9zQ31NyxHMDt3H1%2F5MlK5cCrvqgqIwHZz3eXkWm7CD7DceIoiM4xkavhWlWUpTyItAwgc39t645MJZYHwoJmjiRdV0QQbkQONYoU0wJo9YgsOHHMdLpxBEPtNgKT%2FEdJ%2B898HRzzq3Qy4ZJhj8O4lzpe5Nvhm72nd82%2B1uwAEXibloinv%2Bx4cir6GQ9ngm%2BWnHPprOZQlFDJPRsPv6Rq5xT%2BBo4HRpREFIo2IBCHCaKDlVlDoniHBeH0kQKHIDcqj2%2BU6NfbmvzcalIBmIHF5WIsSIWIkId7YOEtH6V1dKBANyyK8l0U%2B7V2xD4R3FVF68oo6jJFDXMpHxyEc6%2BUQDgVxucDRMyIuD84hHEsoCxAzh8B%2FM8T3LESMp1gU8mQ5Ig%2BJIFRkZe4sSucozBxRLDlHHLjbHDEBNM33jzR%2F6wAyAO6Pu2YJqWAChMy8I3Eg3lqrQOvtUth9LewQIsDCEdIogF3tHYmHUWUtvkccCNx%2FN4rL7PZFJeVpIOg7BoIE1huqFa55%2BpEHgkLWk1%2F1%2BCKJDhHBIdcTjsLzPQSHwD1d33hLHwFgruyaG8r1pSnB57kw7F%2BnLu1G%2F5cXvC9a4MmdkG7VZDTFe0cSYLz%2Br1u2EpMBFXlaPdbAj%2FuCoO8b%2BKERJXjxxgcJ%2FFiAvXh5cOAjIo%2BHHzYq5H8TG%2B6L0u3cV235l9pw38%2BGs0rECDaNZtO%2FG7UTHaERx0Wpxs4jAZ9WY76VghHVhl0mA4zZhKPCxxL%2BoTs438sVAlX80wyRlgOUEDIAhm%2BFGApwhMX609XYF9WkcMFfkZKqsV%2Brxo67zRzZlDRc76rGfldy5GMVFPMCSoYOH0W44roLxHYJFAi5hPLCUJGVHt%2BI0N%2BVR%2Fl4OwUuXiPJitpFj1AEyDcakzn6AO46ORS5TPLeCI1yzZPLXZGsV%2FcGdIXjTpvJEbcxr3qirlWChAYzBwkE0qGDrr6hIGDjBfOP21vz3tufUdC3%2FRlFpo8jK2ZxGSadnlunh%2BV80%2BPbBCW6bU%2BD5CxiVAWC4N0G4pO5vXuoAj7uDAYb3q65LLwhRWSVgZuTuDH4w3P%2FuD6wHrlwKzHXd%2FM3WempoDqbMjIQAO%2B3OzMdQEyFlj4neXG2LMSJStvy5%2FNxZHdHs5ikBivwUUsN5EtjeIXGxxec3nR%2Fm5whB2DCWqsMeScoZs%2FL3THt28QGYgWrr2Ajgh2NiOpcxxy9DXe%2Bq8PW9vJkgp6JrMjyRtx9t5hUvLijecJnvUtpePgaXXI3hfjxEyRi9PvwA8jtye5S482Hff0JHumr8RNka5pfhx9ecJcQRoofzl3sdUqqhF5aSDp6sQMoSAny7wMQC%2B%2BgwPyptPA5D99QcQPINfRTAF0E0Gd2DgiQ6aKZsADyDRU7gILshvHrAMQS83qfNBUMXSLtGyp2%2BNDfDD4fbJsCv2c4DMDwywCuBa9JoIaNUPmHQjHnU4UgBVYxLvbyvnbzq4sDrr4t7VvXYvnchvBuJ8eS70CLahdvfGjounne3ZAW45ouW5W9%2Bf8D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
