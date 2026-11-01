<img width="1484" height="807" alt="{8806AD70-4D30-4733-B18D-96FB271BEC12}" src="https://github.com/user-attachments/assets/eda5c6c7-7314-42c4-86b4-bb3624e49db3" /># Домашнее задание к работе 7

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

<img width="1484" height="807" alt="{8806AD70-4D30-4733-B18D-96FB271BEC12}" src="https://github.com/user-attachments/assets/7a0f662c-02c4-4fa0-8187-8f00955dd82d" />


[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22Page-1%22%3E7Z1Zd6LM08A%2FTc75vxeZQy9sl66JW3Zj4h0KKhHFIK6f%2Fm0EVBpHBZGQeXrmHCMNtND8urqquqq5QYXR8s5SJoOGqWrGDeTU5Q0q3kAIRZ4jf5ySlVsCMPZK%2BpauemW7gld9rXmF%2FmEzXdWmgQNt0zRsfRIs7Jrjsda1A2WKZZmL4GE90wj%2B6kTpa6GC165ihEtbumoP3FIJirvye03vD%2FxfBoLs7hkp%2FsHenUwHimou9opQ6QYVLNO03W%2BjZUEznNbz28U9r%2FyXvdsLs7SxfeCE5lSzHjtfTptAzlA65MFsDvLaUOl7DXNT5G5y2PnMlzaf7kHb34HbS91ewv5vepcxtVd%2Bi82n6rJSJN%2FBDcr3dMMomIZpbfah8uYfKe9biqqTSvx9Y3NMTs%2BTNpo41UxtbdzVjf%2Bpn3K9aOb6xdLLE7dGr5VVUetzr82XfotUl6%2FP5GFBlKqP%2FAjaKix891tt%2BFlv6ovJYHo%2FA4XP%2B1blsclX4YNRrxRApfBdkO9hQ1mRk9tv5KPzPPgEAwVMH%2B8Hj0ZuOFl%2Fq9Zdfl0l7Yhr71qt3Ea5LobiEyq2H%2BqkNPf1Xdg8RVT8P3LFE1Mf25um5PM3PCnNb9o6r3SHfcucjVXqDjdlmtO2HNka2CPDa6nFQLe114nSde5%2FQXoTKXPbdq5Ztrbca27vadxp5kizLXIv3GAPQcS7p3lnYAm5234PlKQ%2F3hGKh0B%2FW9EOH%2FLFe97%2B5h5QiQKGYgMGGWAZBAyKKFuA4diAIQZYBgFDvJgtwPjYgGEGWAYBE3HGABNjAyYwwDIImIRAtgCTYwMmMcAyCJiAMibBABebMJkRlgHCAHD16J0My5oWBi7wVDBXRSYZk3HGxkkQ35YEzJjMJGOZU%2FZBfG0fMHU%2FE4xhAAOMAQ7BLCEWuKeIPleOIZZNxAQpU4hd4NZnfv0fQQxgIcCYKIKgNsZni7D4uhhMQBfrHSJs8dw0%2BxXS%2FOUHoL3mu0qZoOIxpuurd7WUa4ujYaM6LwqtSl4je4tdrTV7rYFm%2FnWYWw5Gr6NyUZmvmr33Va3Tmta7D1UJgK96s73WxRWfaxecOtWekJM%2Flx%2BPuakFRLQugJcKKe7Pc6VM8bXYzZkLGBzFCwAOZ4ovIT5fPJNgPyHBIB%2BUYABxAcQknC0JFl%2FThwlo%2BkyCXSjBECcEJRjM2AgpxedLZBIsA2o%2B7dfnYcacFSi%2BJYmYJZlFxDCGGUMsvl8fMb9%2BFhEDXMYixFB8ZwVizoosIEZr%2BgBg8bqECQY5JK%2Fq8wAYwvfMiefO98yxfTvdRLPnyAFgstztI9%2F63l%2FDP%2FasStAfUSAVOWdym309ZaQbK3dvQTH0jqW7e1XdIpesm2N3n2Fbbrmh2bZm3U7JA9DHfXcn51dp6GPt1m%2FjzQ86EeW8u9N0TrG93wLu1dP3Qx62XNz0L%2B6GPG1J9L%2BTz7zX%2B7x77lh0K5DGdxsiVLxpY780YseO7iMiGOpdxcgZep%2B0XnGkq6qzL694BV1ysuY0p0kO7RmbiH7PRsjvpALtYDKcVr1VFWv4v52AgIXt9%2F87X1pY7Tf1y2z0S5VWb2BPq42ndUVVbflrpYCaMH5fWhPSaB2Cf361vFu9qI3Xoboq9t4qwj1%2BK3ZRe%2F5ltZRXJGmDufzSIwd%2FPcPiEznOloCsFe%2BV7sdicZ9HotkTelqfHDAznroIC%2FlijZAEy8uh0Gt0hUXzbtIsfPBExJTXTu8hVZdavCwv8h9F63kyaHOlUbdSqFdK1rTcKtwtKwiX6%2Bqzef%2FyUiqVv18m1cUz34ADzu4%2BPUrP9wUNV81VdWTP%2BKfFuq1W7Oobt57Ytdx7qTyal55y9V5XEF6fcO9uMJryGM9e1pV3cquVlvXw3f9oNnDN%2Brzjl8OJXeZzNVMR3hfCp2zg9mhe5dfF7%2Fm6Nyk89FrPjaHa%2BhgZo8f8sABb8LXQaUwEo9NXene977tez%2F66e74nFlT%2Bo%2FC2lPXZ6GEApDTkodMNDnPDbf653LjfnYuZ2pY51KKcEUvi8p7E3TOIoYCCBjEfdOn5uT5MBqclg61Z58aZoiN3wI2db6SZybEOApHELGtZ%2Bn6G5oRqWT5Wy0YcwKK7cJIZwGj%2FT4ID2Fe7qBamlUWRDGBVq%2FtV%2Fa5PtamI7mqr9UL9frTmgjxXQH5cqK3IODB8XJX4RQMMZ3Iph9sv%2BmP125IbRCXG%2Bcq8%2BP7SNDq5%2BkduPbjrPzbaS9kZoT4%2By52a2RT1ZvGtB8BLy9bxeGH1gfQ%2Bto1xr9%2BecVXyyNufnbduT2rMpZLUM4Qnx505RQNSw6M5WN%2FZL6T9yxPQ6IxG36iIc%2F9V4e87ziMIf4jla1t5x6XUSZnUc1t%2Bd5wvZf56IhEt46jC7JAgQV5%2BZHlPSrh1p6AU4%2Bg%2Bu0RkCqYdfgnKlHE7T0zo537JMaHRbIgX4%2BbsU6vW8txLsVj7QgZfIYNUWa923%2B7E2njw%2Fvqi9huaIbwXiuVyfW2B5vKBq%2BSM15LRqnHSoDbN1aZ3uvrOA%2FQhzxb3RDTYpepXC3%2FAyedjVauXq2W93Z3PFsLzQFtV1t3mx7rsqN6t2bDbgx25U4fPzSUe2nfdRn3sKNrzofQ8Hg8ereJzSsZ1RuWJiCPLEySkok1mQzbAGLIhohT4IdMYX9E0ZlLgn5MCshx07PHSj%2BoU%2F0XLZ%2BPXywUkifPJb3x8wlVVFT763E8iQoqnJ46Y%2F4757365sD3DfwdlehqF5xJRukKr17yNKgNz3irOZg%2Bvb6vv0lensbwVvHAaTQ2tyRPu8ubM8jQ0OHx%2Bk4ri08J4qLfNj8VXawhJZVJINmhjNecsCeRIAUOZTvVu8GEGn7K21O0P5%2FsfLIve9qd3pPO9uNw7sLja23jSLJ00kiNl3LIxabBAVU7B56aA46BfsKtws7Xa36KrjMuMrVh9zZ9C81porhgzzR%2F%2BTlLk8WBphmLr8%2BBz2kPLP84j65bcqSgdie%2Fc%2FCp5Os6k5fYAr5vuoTZaPjllN3tzyzBIrEz9iAuKd1aEijwFeVeR23ShijbwbxvrUH8IwX%2BQVz907Pjw5g8m5CjFMDTDJIPOyBFoe3wE9u2Bc1BY7eG%2FqbsynuqqduOv3rTU%2FDW54oyIqUnCPYIdLWJfWSn7ygr5lPf2crGEqG%2BD7pEOYBB1DLcBNL7OGkOIhqAxqvfVx6dabfg17HVa%2FEddLxu3fmBFIhKTl8MSk9T76m2alj0w%2B%2BZYMUq7Ukpm7o6pmxtT1qHmiyinK48iZWabQerCcungnfqj10lhdVAwXdLwR9uK9dbr9Vbe23ulfirukov9VROS6KeHlZEj3ZLhkrxwl64FDRA5TFEj81ejRmTU%2FHIh43ixKV5ASEU9AxjmrzrfX6VsiOA67p%2Bu%2B2eccuTZEZuUzeaz2fxfN5sPkonlOnPgk%2BOZNQiHLZjYPh9pz%2BfD%2FZFl%2FhK%2FD097fdBPeX2OOsvScgUdSZNLyhEkU%2FNEcf1AAFMVJecHOmzowpjsJ%2BnvBBT7%2BDKfJ9qn33n%2BKJbTk0qz6PHO%2F4S6hZ%2Fa%2BU85QxGkhHbcToD87bQ6QUy%2FFg5rUPE7gbDv9PdFdjIDwAn6rybn%2BZTlPMYUN9egHNOpPudTTmXX0uPStSnHP0w58KeftqKe5y6a3uJ3s1nncH41JecyF3JC8B8NVTkB%2F2FgJQ6SsTMIP8dRaLqVHq5A8LV4X67LMQcIQQpWhHnK055c11m3q4JoPefnVWPWuy1zSJnltgOE99oXpeN3BC7cg472PWqyo%2B66Vva7TsjS%2FqtNbmlTfe1dCnfQtNTHA0K7%2FaYtnWtzrMOy6zqBBWdj41fzvm6uCxaIWWc%2Fej4PWHBNU9NSNcvtIIEi9wU1XtGToqob38oJezaqiRruQ054EI44p3awO%2B36jkPqib4TQvLWW4h%2FJ84pJM1eb6pdh0bMaGQ0BmiUKaevkB6MPIORwRhUdEGQRiilR6PAaGQ0BmgUcZBGzKVHo8hoZDQGaAScQKmNEKWGo8RwZDgGcUQSFZSUohkjMxwZjkEcRS6Io5ieIeOH1zAcGY5%2BOBVH%2BXgkSUoNR8BwzBKO%2B1mIMCkoZV50RmAkQhHJWDw1e7UD1OPxVkwNR%2BYBZziekpcIygFxCbjUbBtfuDM%2BGZ9%2F5VNAQT6J%2BZMan8xNzvg8OYsjBPlEKD0%2BmeOc8XnSPIdSEFDMpwco86UzQE8CKnBBQHkxPUCZd50BehJQmVJBBTk9QJm%2FnQF60uUJ%2BSCgUhI20j%2B7pupPLap6JOI4KBHYSqtsjcWMrbEoiFQwt7%2BdcK7n4T7imRFRkyCOhvgnkP%2Fjp3v%2BS9k%2FcnjcO8lP1rJ%2FJI6jl1eiV%2Bo6N4nBSaeggi0ARf61M4CkbMIvUxmg%2FDZNKKlV74QTneBqqUE%2BLCl1AsDR6trFWUBgu8jINtEhSg6QjOist5g5QOHroG372L3ndyzSja6%2BSPfhfi7%2FkFbJVu5mWuX5WiVAICgexGTWkv0dsgH%2FjGxwY%2BaYbGCyIduyQaCUEIleqeKaJqcfyRc57z655YVkankhLMsX2ZfBvHvH%2BOLwT2nYR5SWFNVunLjavTVnfWPRSxQ5T%2B0GkEfU6XH1boypmuR0160QYJJW64FVh%2BN2KinYqS62WoUbymqFmepTfoB8an3Kf1bJ9SlRCPYpEUcxZcHW4qROj96nRIEakEDKfQr9vQuxtV5%2F0wrBSKJXfJUQ5aBMbP13P8iWUfPbqeEEmhoRXI0aPsL4%2FV%2BcSfnVEyQA%2BD%2B%2BzSClhu0IDt5gTSJIdy3MSC8EYqD%2BNlAxpvASKYkXwSIK1iQhSg%2F8x2ciAPwhd%2BMPLWjO3I3M3RjF3Sj7Kpi%2FOPQx71Di7saYq5kftfkT8UFSLkjfe5KEt2TjggTZcpeku%2FgtALz4d8hiuUsgJ4dsS174460YcqbPRJKFYA30e7XPHXUhJwVrklG6PhM%2FTC0l9TDxoJiMuxfFdJdEv4J7EWIq%2B0SWorgXIaQCXPzTo3cVTM2Fk5tNqq%2F8Eg31h4JlxH0NgmmoTEPNpobqBKNSAoIelq%2BpovppKYmoqGKSQ%2B6%2BT%2BbiITf0Fp4fi0I93HAoZQWVi%2B%2FV%2Bcs4J9IvEAeR1qeHPDW1DTg5pvOSXApVFRApffxfH3J%2FKAbNxZgNuWzIzfaQu33d71ZA0Or9VYdcNgl36XCZ8suMeBjfn3PEiSJTL1rkQMzXGR2oKrGEjDOZZvN1l76IUUxXBeTotdcTYRoDCkRAR8BEcJzQVdGvLLo200nmp%2Fr9MZH30wXd97KbY%2Fdr8D%2FcPilnqHLHIrNi4y8iilkY28UeqgoBIV38pXMkOIswuyTC7NrvoOdQ6B30HB1qkVhwmd%2BFGTC%2FFxhBDAETepVsYsD4RlfWBlhZhoEB9sL58WwMsP6Ln1LTL%2BnXBVzsYkQcFcsB%2FFm6M12MkviX8yOPzgcuJeVMHOks%2B4oJ2wwLW8TRbigUI0%2F6TFxgBFEbW4LuZN5eEqI3f%2BPK0J%2BYceFhqpJPkOl37F0s%2BXBoijAo%2BE6fwEPxT5RYIboCPq4dw9NXglO24iWcBvkJeqYyHhEeCvVK4N3WVNaCZ0icR2ro7Lg5DxIdqMMnFkp%2BJqm%2FzYeadVKhRHlMrpJkEz93gV5FKX3iong4GXGniQP0K%2Fuuki0jyfGzZX6auCjL3jHiThInyX4afaLEiX568W5qMnZ6PW10p45clCQMhtxp5AR0hWE1PIUdf%2BYwVFXayPkmDkMuIeQuWdMnwgwz5OMiF6oqdeSirGzFkDvtxUllehjFTisJVZU6cPCXAXdi0TT0X3FPAkQ5SJJAG22ne7Zox%2FUYhqvCKUc%2ByFECNFNM28XbQJ%2FfGfhzOO4t3XnJ68Ryhgym%2BCa6KATn32XapRAbfrJpmaa9f7ilTAYNU3WyGEr%2FDw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

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
