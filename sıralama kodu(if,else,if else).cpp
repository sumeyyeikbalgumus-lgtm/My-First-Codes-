#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("uc tam sayý giriniz : ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Hata: 3 adet tam sayý girmelisin.\n");
        return 1;
    }
    if (a < b && b < c) {
        printf("Siralama: a < b < c (yani %d < %d < %d)\n", a, b, c);
    } else if (a <= b && b <= c) {
        printf("Siralama (esitlik olabilir): a <= b <= c (yani %d <= %d <= %d)\n", a, b, c);
    } else {
        printf("Girilenler a < b < c seklinde sýralý degil: %d, %d, %d\n", a, b, c);
    }

    return 0;
}

