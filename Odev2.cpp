#include<stdio.h>

// Not hesaplayan metodumuz
float not_hesaplama(float vizeN, float finalN) {
    float sonuc;
    sonuc = (vizeN * 0.4 + finalN * 0.6);
    return sonuc;
}

int main() {
    // Listelerimiz (Diziler)
    char isimSoyisim[2][50];
    char ogrencinum[2][20];
    float vizeN[2][5];   
    float finalN[2][5];   
    float sonuclar[2][5];
    char ders[5][50] = {"VYP", "Grafik", "Donanim", "Matematik", "VTYS"};

    // BÝLGÝ ALMA BÖLÜMÜ
    for (int i = 0; i < 2; i++) {
        printf("\n\n--- %d. Ogrenci Bilgilerini Giriniz ---\n", i + 1);
        printf("Numara: ");
        scanf("%s", ogrencinum[i]);
        printf("Isim Soyisim: ");
        scanf("%s", isimSoyisim[i]);

        for (int j = 0; j < 5; j++) {
            printf("%s vize notu: ", ders[j]);
            scanf("%f", &vizeN[i][j]);

            printf("%s final notu: ", ders[j]);
            scanf("%f", &finalN[i][j]);

            // Metot burada çalýþýyor
            sonuclar[i][j] = not_hesaplama(vizeN[i][j], finalN[i][j]);
        }
    }

    // YAZDIRMA BÖLÜMÜ
    printf("\n\n***OGRENCI TAKIP SISTEMI***\n");

    for (int i = 0; i < 2; i++) {
        printf("\nNumara: %s | Isim Soyisim: %s\n", ogrencinum[i], isimSoyisim[i]);
        printf("----------------------------------------------------------\n");
        printf("%-15s %-10s %-10s %-10s\n", "Ders Adi", "Vize", "Final", "Gecme Notu");

        // Dersleri ve notlarý yazdýrmak için eksik olan 'j' döngüsü burasýydý:
        for (int j = 0; j < 5; j++) {
            printf("%-15s %-10.1f %-10.1f %-10.1f\n", 
                   ders[j], vizeN[i][j], finalN[i][j], sonuclar[i][j]);
        }
        printf("----------------------------------------------------------\n");
    }

    return 0; // Program burada düzgünce biter
} // main fonksiyonunun kapýsý þimdi kapandý
