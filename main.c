#include <stdio.h>

int main() {
    int sayi1, sayi2, toplam;

    printf("Birinci sayiyi girin: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;

    printf("Sonuc: %d\n", toplam);

    return 0;
}

