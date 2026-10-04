#include <stdio.h>
#include <stdlib.h>   //Bu kütüphaneleri de yapay zekadan yardýmla yazdým bilmiyordum.
#include <string.h>

// Çift yönlü baðlý liste yapýsýný yazýyoruz(Film için)
struct Sinemadaki_Filmler {
    char film_adi[50];
    int sure; 
    struct Sinemadaki_Filmler *sonraki;
    struct Sinemadaki_Filmler *onceki;
};
//Struct ise ne char ne int içinmiþ her ikisini de birden kullanýlabiliyormuþ ayný C#taki var gibiymiþ.

// Tek yönlü baðlý liste yapýsýný yazýyoruz(Salonlar için)
struct Sinema_Salonu {
    char salon_adi[30];
    int kapasite;
    struct Sinemadaki_Filmler *film_basi; 
    struct Sinema_Salonu *siradaki_salon;
};

int main() {
    
    struct Sinema_Salonu *salon_listesi = NULL;
    struct Sinema_Salonu *yeni_salon, *gecici_salon;
    struct Sinemadaki_Filmler *yeni_film, *son_film;

    // Salon Oluþturma Döngüsü
    for (int i = 1; i <= 3; i++) {
        
        yeni_salon = (struct Sinema_Salonu*)malloc(sizeof(struct Sinema_Salonu));
        //Malloc bellekten yer ayýrmaya yarýyormuþ onu öðrendim.
        
        // Kullanýcýdan bilgi alýyormuþ gibi sabit veriler giriyoruz
        sprintf(yeni_salon->salon_adi, "Sinema_Salonu %d", i);
        yeni_salon->kapasite = 50 + (i * 20); 
        yeni_salon->film_basi = NULL;
        yeni_salon->siradaki_salon = salon_listesi;    
        //Bu sprintfler ve salon oluþturma döngüsünü yapay zekadan yardým alarak yaptým.
        salon_listesi = yeni_salon;

        // Her salonun içine 5 tane film ekliyouz
        son_film = NULL;
        for (int j = 1; j <= 5; j++) {
            
            yeni_film = (struct Sinemadaki_Filmler*)malloc(sizeof(struct Sinemadaki_Filmler));
            
            sprintf(yeni_film->film_adi, "Sinemadaki_Filmler %d-%d", i, j);
            yeni_film->sure = 90 + (j * 10);
            
            yeni_film->sonraki = NULL;
            yeni_film->onceki = son_film;
            // -> iþareti ise oradaki bilgiye ulaþýlmasýný saðlýyormuþ.
            
            if (yeni_salon->film_basi == NULL) { 
                //NULL ise listenin bittiðini söylüyormuþ onu öðrendim bir de.
                yeni_salon->film_basi = yeni_film;
            } else {
                son_film->sonraki = yeni_film;
            }
            son_film = yeni_film; //Son filmin yeni film olduðunu belirtiyoruz
        }
    }

    // Ekrana Yazdýrma 
    
    printf("---*SINEMA SALONU VE FILM LISTESI*---\n\n");
    
    gecici_salon = salon_listesi;
    while (gecici_salon != NULL) {
        
        printf("SALON ADI: %s (Kapasite: %d)\n", gecici_salon->salon_adi, gecici_salon->kapasite); //Burada da salon ismi kapasitesi gibi bilgileri gösteriyoruz.
        printf("Gosterimdeki Filmler:\n");
        
        struct Sinemadaki_Filmler *gecici_film = gecici_salon->film_basi;
        while (gecici_film != NULL) {
            printf("  -> %s [%d dk]\n", gecici_film->film_adi, gecici_film->sure);
            gecici_film = gecici_film->sonraki;
        }
        printf("--------------------------------------\n");
        gecici_salon = gecici_salon->siradaki_salon;
    }

    return 0;
}
