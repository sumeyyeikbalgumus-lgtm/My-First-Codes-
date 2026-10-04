#include <stdio.h>

int main() {
    int sayi;
    int toplam = 0;

    printf("Sayi girin (bitirmek icin 0 girin): ");
    scanf("%d", &sayi);

    while(sayi != 0) {
        toplam += sayi;
        printf("Sayi girin (bitirmek icin 0 girin): ");
        scanf("%d", &sayi);
    }

    printf("Toplam = %d\n", toplam);
    return 0;
}

