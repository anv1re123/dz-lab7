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

<img width="1585" height="825" alt="{F2494EA8-31F3-4744-8C7B-443B9133A6EF}" src="https://github.com/user-attachments/assets/324729cc-c2a0-4d7c-a526-5f1643d0e7bc" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22Page-1%22%3E7V3bdqq8Gn2ajrH%2Fi65BSDhdqqj1VGuttfUOBRVFsYjHp99BQCW4rCAiXaUXFkOIkMzvNPMlPMDcZF00pNmwpsuK9kBT8voBig80DSFF4X9WycYuARzN2yUDQ5WdskNBU90qTqFz4WChysrcU9HUdc1UZ97Cnj6dKj3TUyYZhr7yVuvrmvdXZ9JA8RU0e5LmL22rsjm0S3maO5Q%2FKepg6P4yYAX7zERyKztPMh9Ksr46KoL5B5gzdN20jybrnKJZvef2i31d4S9n9zdmKFPzxAWtuWLUuyOrT2hKk7p4YHaVnD6UBk7HPIjUQwZZn9n87tOutP8den%2Br%2B1s4%2Fk3nNubmxu2x5Vxel0R8DB5gtq9qWk7XdGN3DhZ2f7h8YEiyihtxz031Kb48i%2FtoZjUzN5VpT9X%2BJ38KVVHPDMT86wu1hc3SRlQGVLP1Omjj5rLVhTDOcXy5zkxoU6ZzX4N2h%2F6sttTVbDh%2FWoDc51O7VG8xZfpZq5ZyoJT7yglPdE3a4Is7b%2Fij2xh%2BgqEE5vWnYV3LjGfbL9koZrdl3I%2Bo8q5UCh2Y6SGae4Fi57mKSzOjr9xuFKH4H77jma5OzV1XMtkHBpdmd32dlXrjgaEvpjLxhLsyxepbCn8bmhPN6anVUDWV5kzqWc%2B%2FwtKEy%2By%2BXSqGqayPutsZjaKiTxTTwM9CDY8gCBn7MucKxEP7uyuBPP%2FHqSE5EBjsGzrABx844%2B1%2BPQJUpACDoQFGpwBLIMBoDiYLYCg0wGAKsAQCDDJcsgDGhAYYSgGWQIBxKGEA40IDjE0BlkCA8RAkC2BCaIDxKcASCDAWJkyDASo0woQUYQlAGAC2H33QYUnzwsAVTEVKVSQSYwJKmJ0E4WNJkAaTicRY4px9EN7bB6m7nwiMIUB7MAYoSCcJYp5nCsi5UinEkgkxlk8UxK6g9VNe%2Fy4QA4j1YIzjgNcbY5KFsPC%2BGB2BL9Y%2FhbBVo6UPSrj7C89AaWZ7UgFDxcGYqm7e5Xymw03GtfJSZNulrILPij2lvWhWQCvbHGfWw0lzUhCl5abVf99Uuu15tfdc5gEYVVudrcptmEwnZ7Up99mM8Ln%2BqGfmBuDgNgdeS7h4sMzkE4Wv1WHOnEXgLLwAoFCi8MWGxxeTarB7aDCa8WowACkPxHiULA0W3tOnI%2FD0Uw12pQaDFOvVYHTCLCQfHl9cqsES4OaTvD5DJ4ysgOEjSZhGkkmEGEJ0wiAWnteHKa%2BfRIgBKmEZYjA8WQFTsiIJECM9fQAQd1uEsRqukpXVpQcY7NfCyufO9vWp%2BTjfZbNncAUwWx%2FO4aOB819z617UCPzDsbgh60pqd64vTVRtY5%2FNSZraNVT7rKwa%2BJZVfWqf00zDLtcU01SMxzkeAHU6sE9SbpOaOlUe3T7e%2FaCVUc7YJ3XrEtP5LWDfPfk8eLAFcSdf1AMebZ5zj%2FFn1pE%2B55m7BtkLuPPtjvAV7%2FrYLQ0o2ME5IgxDtSdpGU0d4N4TJ6osW%2BeyklPQwxcrVnfquGpf22X0OzFC9qAVSIJJs3r1UZaM8f8OCoLO7Y%2F%2Fu1xbGJ03eaTXBvlSuz805%2BXay7Yky6Yw2kigwk7f18YMd1oXwz%2B7WRc3r3KtOZY3Yv%2BtxD6hN7EHO8uR0ZaakFeGS%2BG1jyuPGrT4guuZPBAU8UnqfaxWT1nI6X22rwxwhYX20oOIzYoVjCS6sB6z%2FVqPXbWKs1bug8EqprC1pAc3nW8zgrDKfohGYzbsUPlJr5SrlvLGvNDOFdcliApVuaE%2Fvb7m84Wv11l51WBq9JAyey91vvGUU1BZ35Qn5oJ5WW07csksv1HbmVnJvOcLk2X%2BJVPt91i2%2BYL6xeFkziC0eN2W3vGjltrG89fgo1VDFeOzyKzHM7PAZCq6xL6v2E9BQ53Jssxsxa%2Fltj%2FLPffbjdpYbn9MtEk9O87RbbqZ69ZmrNYdSP1i%2F6vY75ujYuMJR1DZj9zbWlAXk%2Bch4OPQh5YYnMYNtfuzcWMf%2FxdWfzKO%2FjwKb2kWesNbxkvQISrVqPFqVGPRfbAm3PATUFPrCHczrmtBIJDSTHuWfJ6xPiN6lgnVswHNUXBCJhpzRLI5EZqjUUeUc%2FPSSsTmqGz0RuWv6lyZc7BY2WxX8lfdWLLCUgLZaa6ywVp9XN%2FkmVUNjBdCPoM6r2q9%2FGUINezgomxpKb6%2FtrRupvqR2Q6Lg3qtsxYse%2FPxWehW9BantsS3PgCvbVNF05UxAPz71NSm%2FUFnQZXxkHc%2Bu2%2B9Pl9b8nm%2Br7EvFjk5h0PcQl0fbovmK%2B7%2FwgzUupPJFxRR5t9Q5S6pHUCV00i4dQR2Xud8q2H6dj8e6rk6468XYkUxDaqaTqkF6KxdLBzJvN12DA4rCs6nRaIhEEnGRaghpp0sDm8bg7wV3sLFGK2mrcWnUq5kqVdRrIygxpSwySmo5d5bkatMh%2B%2FNV3lQUzT2PScWCtWtAVrrZ6qU0Zp5rV2h%2BGFlnqnMi6r8zgD4ISxWT1jQzXx51EYf9OyzXlaqhXJB7fSWixXbGCqb0rbX%2BtgWLLe4vRj3%2BnRX6FbpRmuNxmaxV6tOLSd4OeYb0%2BmwboiNmALfWLQDhwJrB8jG4uklQ9LpEJIeUKbvFISiGwahqUwnXKYFwUuIMfxd7f1vjDF2fFjGoxesT2bHjbE3dSOY4HMmkagchpxwSXmvlPdKlOq8gPeiBXIygaEicYh8e7i8TUpDfdkWF4vn5tvmKz%2Fq1taPrJNUosi%2BnWn8AqwvDMd7oseNN17kXlbac7Wjf6xG7TGNG%2BN9kq5M5Yy1MY4l05o0n6s979B4x0xZq%2BaHdfwHCZzz%2FdOpaR2L66OK4uboy4tiqLiTLJ1hl01xh3masgo%2BdwUURbsFhwZ33zbH38gmXbVoDBR3Wsh53qWkLRTXNH2LCWd0DUWTTHXp7fUjoLj1HJw84vvm%2BDM5i7tfxX1tTcTtKzgidAScyfrFKns4mi%2BlvfgTiB%2Bxh925KkBDjit6aMjuOl9DOyjvO%2BsUun1QPok%2BNx3qvOlxFT2uJWmaounYIEwsZXM02p5zRzA4qUiOwLxruzSdq7Ly4O5ItFbcfabCWKuQWuoIj5a9PnYLCq5bgD%2BFo7NUKAXnxm5HuAW0F7iI3qd4uN5hCAXng4BWfirXXyqV8Wjc77aZj6pa0B7dqf9ItBkj%2BLUZbrfpfNUNc6gP9Kmk5Q%2BlhD471KnquxDQwsAIu4EbBxPSwtS9GPJrmZNP6lqWb1XPSTVzTcef7atU9i6VPcY5eyOp4w6LWd1V%2BlFI3Wmzf0bI0sH%2FTvHyt4IA4ChEYEBgboYBLsVAohSAxbMSow98rt0Fw59yMJdzMNIOEVTX%2Ftez%2F01jzkI6E5mlc8HpXPCd54JBNHk9FxolIVw4AJHf8w%2FNY%2FBHPAb1RxCYa7gMhmQyYDRMxlk6Jy5648xypqjIDYGYlwjLbQBENBQdt3E63KNDIjlKRg4QSEbXsXLwGMvW%2BMOIaDl34dw%2FRctBmlCcYaEL3e9xQTckJ4P8Pkl46LLHZLKrNqNRwt9g9kJdy8SsaxEiUHALzCJyWcTlmCVWIpK24daYRXfGLHAnKfbqlqGumgRhDnMel6D2Qk17HTUZEZTPJht8A%2BXT8OMpGlsjL5QpigCa3ejpBljXy3V1rhBSebO8tyHEEAxuaEH4Z3Mp75VMeUYW0gzLNBsrxmwsliOUBnebmPs04rlwpvOsKYnAB3TD7uR6gMI%2F4AHyFEVO9pJZAJeaPssIEzNYgMDxrb1APplQFohInNm7ilHlx7ARBeIoVkgD7CFE7AmC%2FbSKC2cQxA8UIBnHhPQD%2FffBEY96M0cwGW4dvHni%2FGmpDf6ugjSbPvXfrvPfAAReYeeiyQj9GZKO7iPpbPB3RqSSnkr6lZLOEg4CT7L8twzV3LytwCxndNOjAjE9igQhQpbTCnModEuqM96YDVAocgd3Hwa6QZa9l%2FaFDi6gGUhcHtbDRYhoSYiX82fpKKO9E7nDYUWE94rI1dEe%2B0BEexFNu54xqzFKiNvz0UkIx3olhENBQkCwj9SIy4NLCMcSxgLELCHw7wKR5njeL88X8mSmJw8J0i2yFRYsSjGQRAxQLIkBDtwMA0wAS%2FnzmfsfTcgD4P6461aRBjIABeltiQPx5sAFWqqawu6%2BsEOIAAtHaKMAcYG3JR5GNQv0M%2FgwcPs9Y06L252WDKSE2G8mxATWS30L5xiPyAmxkOsFzka%2BkbBkBEnmMgJRMAA7kgzckgKIN7UVAObMZtyhKACaEnwRFsP%2BcfIOL%2BQBeMH7%2Fhae3PfsUotIU7y3JQHGywO46UQxOWKRpzvESoC57x37uQQYjSjBizc%2BCAFmAfbk5cGBj4h5UfywUSH%2Fh%2FiCd0qD4O61UWjqC%2F5eX9BKASTEPZqtQi%2B0cnSEziAXpTk8ZiauNoe%2BFaUR5f6d7gYYsytIhec2%2FmKDON%2B7XwKtDKEZYpoTUEJIQg7fCtEU4AjP9183h3fKFeKCv8EpNYepObzSHO43cNqLO%2BlI39Qc%2Fq5Jn%2B9NWcwLdhk6PKtxhkoQiO05KBByye6JpiJLUb8Qob9rfuj77Tu4eJ0ti0WMHqEIkC9uJ3MbAtAHZFPkstxbIzTKtXGudEWyP4KXYBb2m%2B8mR93GvDqOOpdBExrMHCQQSIcmgX1NQcDGC%2BZ0u92E7fhHQd%2BOfxQ57R5ZEpArkOnwJ2X4Wc43%2FL5Ng6LbaTnIHFCMpkwQvNumXDlXegtTxsc9I8SG98tOGx9IEbP0wJ3juZAE47m%2FXB%2FYDp64lZjXDfAXRRmpIoxNEUKKJErg7TacpwOowdDa7aCPjpYzOey%2Frd%2Bu5%2BvdHQZj0kqswEetlZBvusirlL6%2FgKG5P0FyOsgGmLDePEPeCYo5MnV3MPwx3EmsYPUl2ESwwxiRle2405fhznd12JxunkyoYCJLrr0Qdz%2BNs4sXdzRPxPQ3WRIQPjeb3JUkfvwEYdR%2BH34AuV3gTXL7%2BbBvjMIt3Rs%2FQbZ4%2BnX44QV36Wuk%2BOHcRYSHSafQS2LJQDJ2AAVJGf99AGLhDQyYf6ox%2FJyQr6m4AeQ6%2BimATgLomh0vAswE0kxYAPmaih1AQXZx%2BXUAYolxvc00Hgyd0u5rKnb40D8MPt9s9wN%2FJh0GYPhlG%2BfIcRKoYRkqf1Mo5vlmIUgCWoyL87xvKr538sTZFzT%2B6Fw1X9gQPuzkWPK1iFHtqo%2B%2FGrpuHlc3pNmwpstWBnX%2B%2Fw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
