#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>



/*
“ренер формирует стартовый состав из трех игроков с номерами A, B и C. ќн считает,
что это "счастлива€" тройка, если сумма номеров игроков делитс€ на три без остатка.
«апишите условие дл€ "счастливой" тройки.
*/

int proverka(int a, int b, int c) {
    int t, t2;
    t = a + b + c;
    t2 = (t % 10) + (t / 100) + ((t / 10) % 10);
    return t2 % 3;
}


int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int a, b, c, gg;
    printf("номер игрока A, от 1 до 99\n");
    scanf("%d", &a);
    printf("номер игрока B, от 1 до 99\n");
    scanf("%d", &b);
    printf("номер игрока C, от 1 до 99\n");
    scanf("%d", &c);
    gg = proverka(a, b, c);
    if (gg) {
        printf("нет");
    }
    else {
        printf("счастлива€");
    }
    system("pause");
    return 0;
}
//€ не пон€л как без if и использовал конспекты с лекций
