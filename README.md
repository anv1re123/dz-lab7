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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22Page-1%22%3E7V1Zd6I8GP41PWfmYnoIgQCXKmrdWtfaeocsSkWwiOuv%2F8KmgEsromXmwwvFECK8efLk3RIfYGG6LpvCbNwwJFl7IAlp%2FQD5BxK%2FGIQ%2F7JKNWwIAB9ySkalKXtm%2BoKNuZa%2BQ8EoXqiTPQxUtw9AsdRYuFA1dl0UrVCaYprEKV1MMLfyrM2EkHxR0REE7LO2rkjV2S1mS2Zc%2Fyepo7P8yQJx7Zir4lb0nmY8FyVgFimDxARZMw7Dco%2Bm6IGu29Hy5uNeVTpzd3Zgp69aRC3pz2XwZftgyIQlNGOKOcSp5MhRGnmAeeOIhR9nv%2BaLz7lba%2FQ65u9XdLQR%2F07uNubXxJbacS%2BsKj4%2FBA8wrqqYVDM0wnXOw5Lxw%2BcgUJBU34p%2FTDR1fnscymtnNzC1ZF1Xtl%2FTO1XkjN%2BKL7SaxhZ3KhpdHRKfXHvVxc%2Fn6gpsUGLb6Qk9JSyILn6P%2BgHyv99TVbDx%2FWoDC%2B1O%2F8tKjq%2BSzVq8UQKXwWeCeyIawwRcPuvht2Bq%2Fg7EA5i9P4xctN5ltPyWznN9WsRyp2qtcKw1gTqRIpgn5wXMdl%2BY%2BPgtOL0L%2BN77jmaHqliNKOv9A49K8I%2Bu8IE5GprHQpcgTOmWyLVsCfxtbU82T1GqsWnJnJoj286%2FwaMJlrmyXsmnJ64C4vd4oy8ZUtkz8LMQ4AEFIu5d5V1AsdL%2F7I5BlH70aggeB0a6hPXzwgdff%2FtcAoBIFGIwNMDIDWAoBRjIwXQCjYgMMZgBLIcAgzaQLYHRsgFEZwFIIMIZKGcCY2ABDGcBSCDAWgnQBjIsNMDYDWAoBhmDKGAwQsRHGZQhLAcIAcPXoPYelTQsDV3gqMldFKjHGUSmbJ0F8WxJkxmQqMZY6ZR%2FE1%2FZBpu6nAmMUIEMYAwQk0wSx0DNd6HMlMoilE2KITRXErnDrZ379H4EYoFAIYwwDwtoYnS6ExdfFyAR0MeUYwlatnjGqYPGXnoHcyYtCCUPFw5iqbl6lYm7ATCeN6pJH%2FUpexmd5Ue4vOjXQy3cmufV42pmWeGG56Smvm9qwP6%2BLz1UWgI96b7BVmQ2dGxTsNiUF5bj39dtLbm4CBm4LoF3BxaNlrpgqfK32MXNEgbPwAoCgUoUvFB9fdMZgP8FgJB1mMACJEMRYKl0MFl%2FTJxPQ9DMGu5LBIIHCDEambIZk4%2BOLyRgsBWp%2B1K9PkylzVsD4liTMLMk0QoyiyJRBLL5fH2Z%2B%2FTRCDBApyxCD8Z0VMHNWpAFiUU0fAIq5LcKQhqvkJXUZAgb6XNj53HnF0K0%2FcyebPYcrgNl6fw4fjbxPza%2F7rUbgI4NwQ%2FaVhHNOEaaqtnHPFgRNHZqqe1Z0u8MuN0fDX1g2%2BOEI%2F%2BO3W0lSTfxcqqG7FTXLdMs12bJk888c95Kqj9yThP%2B7mqrLf%2FyOcO7KTjun3ZOGfYnl3RBwHzH60BgRHO8MQuIBQ4Jl%2FGP8nveGqCeYoRkVFe4hV1oHxU5H%2BKUXjv7LHUkYq6ooaDlNHWHp8VNVkuxzecErEPHFsi1OA1dVNCft3zMk8nvqSMALZQ660ofRGBUrfWVszauN5rYiSRb3sRFADemva3OGhTPEYyG%2FWZc3banRmUgbXulW0BPV5UU4WH6YfaEDWXm85NoKrvzRIvkmrmexgJP5J0F8W62e8pAxFKTII1xhoTVFSKE8X8OIIUvrCVIaIlr1yrNe4Y3GfFPa2kMJN13s0xy3yr%2FxZms2HhDFqVgp1CtFc17qF8rrCqRKdallPLXbxWLpsz2rrlp0gxwTlth8YVtPBZmqGpvq1FrQzdV2IFWsapfYzqxa7rVYmi6LzVxdERHqNCmlPJ7OaYpatLeVV%2Fyolb75%2FDl66zWomvlepteTmVWiczVDQK8r9M5p1GC6rNJb%2FnO5VWaFZ6Xfakyk%2FttUm77kJwWyT3YKw8YMacORoJSVz7KiWB%2Fl1hM2p%2FJvhe6aUxfT5zFgU0uOtEeOAduVRDBsu9Jh7xtFZHSZQro0F8MHO%2BSGH5PQ7SPcF7iufW8XMWIm%2FljinxiziPjpWOK%2FcEK63G%2BTzISUgNPnY8BLhXllxeMJqWqKH9XP%2BlyeM7Bc22xX0ueLuUTcUgB5vVDbYF6fvGyK9KoBJguumKMGbfWl%2BmlyDazvUvnKkn9t97Rhrv6W247Lo5fGYM3ZM87be2lYM3qM2uO7CgDtvqVS%2BsocAfZVtzRdGQ0WRBV37eB92BUVtrFki6yioabtq5zDMW7hxRhvy1Yby7k0A43hdPoJeSqXTjL3fdYXkDlJcbc2sFJNKD%2Bj2XrPMzPl048TvGV8SpjasPAqFIS5iMeYgE81DN2Ing48%2BF4o3Mw64FDNfoQ%2FkmBOfh3SKdYNfrtH9jlHU%2FCK9%2Bd%2FH30%2BBbdPEr%2F0HSG6YvB40btXl%2F2c03B3Gn%2Fkfweo0ZHQPRT7y9Pak%2BHRBJLiPwZPmKwqo2Kxg4UwWHDD19lSxtgokc3qZ39TFMpjofm2HPdRA7Q%2F%2BGFrKHcboxxooKm%2BbRl6ubkaMHBVzMFWDvPqAHZH03y7lec6L83FuMuWRKja9j%2FqlgeAHSqiWJXEV1murAzp%2Fe0ZtDsNa9HaCkzPrNrUUOQhLZBL9IKP5cVsZSlsGR%2FmB1WK38oba1hnuCXNoKfWRCe6UjHV3oMYnArp%2FzenpldJm69USxz%2F0n%2FflEyoy1cwJEMmCax%2F0Af5Om%2B0MJm0mwRcTKiV3lu8y9VanmjzfO0DanQFo6mkVsVumanp49dOWxo1ZA29FvhSqb41QW%2F9TFRyWqeo9WsEO67Nc7V5WZVeaQDfuMXqCVO8Vax%2B9Kk3cvb%2BUpXrpWpJHYjLxQq1xvKmshV7b9uS7YvoLyaiQg65YZ1s9dbUxCqLjbpuex6WE7al6%2BMXk2%2BlmTwY6nLrGmXkkU7yEIW57Jy8KXdcHiVNhDuoBEKsGXfcmTsYKhzKoNHNY%2F4Zd1zDHbjPc%2FYh9D5xEeVcdktG%2BaGYBZVAzCJjlB9mFA5kzv408olnyEyM2Y1Nmcs3LEmGPKiMPP468gAEl7HH38AeTmZFLjTq7XfaybJANyUU%2BvIUvUQIhU4gvy%2FLoMgyKGJlUES1KkBy9zPTjvKc4j73nhp85jpJkJiJ9IsJ8nSoiYSMF0UKHMQMNx1XhtwbvkPsqDutjI1ln18snjvdzWfxY9hY%2F0GZ4pQpTrEVp8QcOQd7AR8Hq7c4SZYOdjg%2BRKyxMD3uICetLsszzZX2XB8Yb6uP%2FoTEjbEH0JZ1KWdvsGyDWBPmc1UMyzrcCfJatd7s40eKY7zv715N%2B5hfByrym8CXpmyqWEj2IHHLdCywUFN2wbtTQNjOGLdg36DzbRP8Fm3SJwdzJHtygd7zLgVtIfv8%2B%2BWk4fW3KWuCpS7DUg8gxa%2FnAeUPvm%2BGPbP21flVLGs7oXtXwRsTAeBM10277CGQd0%2BGZygu8iNut3tXXdCQ537aN%2BSK7qAhB8o7YR1D9zehzMSDMrwZajHS4HXIRbdCLvcPIhcerhiJi11IHzR1a%2FSyMdHLJYheLjnO5ULITQa1vi79T6GWAomhlkJ3Ry0XD7V%2BTyaCWjrCuWR85Nq97nL2nnTppEjXnw%2FvBF%2BWZM4sNP8CvqcAF%2FHy0UQEVW6Lx6%2BmCeIRQEjsXuE91hDg7AmU273iDQoUvUeKe%2BTQXUcFQ1wwKmKPgD3bEkRETwjQ75WQBXeA7El4fok%2FRFCPFIyJEyba1kH2za1hAmOS59XQ8cgzSJY%2BcNhrpn3C2SM1BEQ2GSCe8bSkBp3Anjoi8IyHTUBwX7R0a2hSMaFJJQXNCCypq2BJPkRmdJQQPaYcgAyKTHyxAXjQ0o0ByMZVLJPixqg5RDxyO%2BM%2BCZPI0TSpv0ix%2FD4M2ciebehwg%2Bbv4jDaFEMeNHVjIPr%2FRPdjFs4f4sgsja40cegbmThHRQiIe9Dk3vBhIBkhq6sNH5JgQjjEM8gjeRa50SuY6D%2F1fVGfu7A%2BICjmkWUvuwZw6BGFrvnChINkVA4xrTRAUwf3HyGa2AP7q9joj6y9uzi4ejqACuwYkhMXBf5nzPCpE9MMZoOU%2FGyQ3Xvu67hqaKWeywhXBVA9vviBCGoCS%2FKyCOpDkrsNw8MUCxhh%2FANW2%2BVl3DbFIjX5FPRu1e7%2BIEgIdoDLTbMgdwcnCGFoysLk0kyKRIb85fvoZkP%2BnxzycOeGC4x5QIXHPEvs7ICdLkMTj%2BQdMycAETPefL2PJGhU7vxrO6MyliofNHt9F2C8KOC3jQJ0V6OAg%2FFtgpNaLEdEsvsIGFFiLzB0H4lA7IOLTGks8wgAS%2Fln7%2BuMAUTM4PT5nk%2FAR0MTVBCs1wX%2FQnZwgmFrN%2FE5Re4ZPBrAPgoX2WCfYG0SAdSVYTiWIR%2BJCIoBRjGCByC%2FG4pj%2BhTPOzUSQDEX8TTS16QNOXNAJAxDJ%2BVpTBmUERt1aDAx%2BfegJTK6Neit0ekvmDmv9WJNyjEhLNOYyBHdLKjGekW%2BLqzJin3ZSZ3ZW2xSd6o5fzjtlbS9bqTCevQYXyjrB%2Fpj3jZAMNxsTRJbGnQe7L87yuXMMLE2rePbF1TnIWVhbq3kueWMDkuwhKHzpMQJjTIwmA6AKMmKsNCsWEqn52w7o0IAOuLPY%2BNsT3yAhaN5tP4oS4SoUHI8tfc7%2BxGRa6LFEYoimWQo6rhE4f2UTZt%2FudPIiOV%2FBjuEHncnf%2BG2BSQZtpYQAvF4Euz%2BPcW%2FERBp6WZu22ytX8xdS267bcmZ8fYD7pxsL5OUuXO%2BswaGjKyB2aXwJezHOQ7VmKkut51s94moyVgF0dn2i7n2u9PqfRfAIMCB08CIN7FG11%2Bxl02s0csRGdMAASTDPVIMtTPLyeht3S7x4Xjf0vHGxVn9K5GUxfCwoK5LyyHCHlTc3ldj4yo99B7rbi5IGKNRWC9kAIqbqgOQz6Sn27o1ZJnTCM1M6J83oYnIYngm6i1PzoJmv4MEX%2FPDtQRNkzUDa4hTW8SBwR06Fxj1X8nWabuiz1VJ9koUdS1LHcfEOC79s9kYXOAsEauD0GEHATLSQ1FNjOFu1kPcv9ZDu3yZG%2FUNirgA0M36xr%2BbiyObybmaPBf2XvmFV6Q83kb59V0o91J%2BSTpxrxLh69M7%2F7m3oC%2Bm9sv5KsDFygOMhqH8O7mX7oDOQPzv5KPgjOHbacmzEoyGwEGMPwn6ZheRmXr3N6l3hym9yUEh7vqk5Gao0KrjqyzQ6PKkwIYlNzBB77JoLrCIfufJSDIYcpD9RXg%2BxW%2FHQyITV3Sl%2F%2FfdNlwU9CjyvKkOiPztufAH4ZZYefB%2BpITcb84MAhs1Ayq8U%2FN38uBvFlr5se3FstDKPxBaAcSNcmSPYzXR3cWSmrsPfcg0cd0MHt2nCTIJLXs%2FLgjmrjM4VujPQCbeDI4OEmeRP6V%2Fcwan0ckWYriu%2FT3AzjR2a%2FvzW77rv8n%2BvLc%2FDBDwjIPkBLVlSScJJ50I7j0M3Q%2FR%2FdB9Udzpz7rP7E55f8Up%2B8PUNCpPMf7cL45nK77qFDNZHSa1A0t0JZCd7un7POItrgjrSIF91m6hI915a9b4O619e3e%2F6MbhcXcJBFRSmg3%2BahqGFayOR%2BS4YUj2NFr8Dw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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
        printf("%d ", kop);
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
