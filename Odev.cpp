#include<stdio.h>
//Burada tekrar tekrar iþlem yapmak istemediðimiz için bir metot belirliyoruz ve o metota göre de sonucun nasýl hesaplanacaðýný açýklýyoruz
//return ile de sonuçu ana metota geri gönderiyoruz.
float not_hesaplama(float vizeN, float finalN) {
	float sonuc;
	sonuc = (vizeN * 0.4 + finalN * 0.6);
		return sonuc;
	}
	
int main(){

    char isimSoyisim [2][50];
    char ogrencinum [2][20];
    float vizeN [2][5];   
	float finalN [2][5];     //Burada 2 öðrenci için hangi bilgi hangi listede ne kadar alan kaplýyor listeler hazýrlýyoruz.
	float sonuclar [2][5];
    char ders[5][50] = {"VYP","Grafik","Donanim","Matematik","VTYS"};
    
    for( int i= 0; i< 2; i++){
    	printf("\n\n---%d.Ogrenci Bilgilerinizi Giriniz Lutfen--\n", i+1);
    	printf("Numara:");
    	scanf("%s", ogrencinum[i]);
    	printf(" Ýsim Soyisim:");
    	scanf("%s",isimSoyisim[i]);
    	
    for(int j=0; j<5;j++){                 //Bu bölümde öðrencilerin bilgilerini alýyoruz karþý taraftan.
   		printf("%s vize notu: ", ders[j]);
        scanf("%f", &vizeN[i][j]);  
    	printf("%s final notu: ", ders[j]);
        scanf("%f", &finalN[i][j]);
            
            sonuclar[i][j]=not_hesaplama(vizeN[i][j],finalN[i][j]);
            
		}
    	
    }
    //Bu bölümde alýnan bilgiler ekrana yazdýrýlýyor.
      printf("\n\n***OGRENCI TAKIP SISTEMI***\n");

    for (int i = 0; i < 2; i++) {
        printf("\nNumara: %s | Isim Soyisim: %s\n", ogrencinum[i], isimSoyisim[i]);
        printf("----------------------------------------------------------\n");
        printf("%-15s %-10s %-10s %-10s\n", "Ders Adi", "Vize", "Final", "Gecme Notu");

    for (int j = 0; j < 5; j++) {
            printf("%-15s %-10.1f %-10.1f %-10.1f\n", 
                   ders[j], vizeN[i][j], finalN[i][j], sonuclar[i][j]);
        }
        printf("----------------------------------------------------------\n");
    }

    return 0; // Program burada biter
} 

