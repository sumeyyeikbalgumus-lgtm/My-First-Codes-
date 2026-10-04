#include <stdio.h>

int main() {
    int a, b;
    printf("Iki sayi girin: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d daha buyuk.\n", a);
    else if(b > a)
        printf("%d daha buyuk.\n", b);
    else
        printf("Iki sayi esit!\n");

    return 0;
}

