#include<stdio.h>
int asal_mi(int sayi){
if (sayi< 2)return 0;
for (int i=2;i*i<=sayi;i++){
	if (sayi%i==0) return 0; 
}
 return 1; 
}
int faktoriyel (int sayi){
	int sonuc=1;
	for (int i=1;i<=sayi;i++){
		sonuc*=i;
	}
	return sonuc;
}
void not_hesapla(int vize,int final){
	float ortalama=vize*0.4+final*0.6;
	if (ortalama <50){
		printf("Gectiniz");
	}
	else
	{
		printf("Kaldiniz");
	 } 
	}
	int main (){
	int secim,sayi,vize,final;
	printf("Bir islem seciniz\n");
	printf("1.asal sayiyi bulmak icin \n");
	printf("2.faktoriyel hesabi icin. \n");
    	printf("3.ortalama hesaplamak icin. \n");
	
	printf("Seciiminizi yapiniz :");
	scanf("%d",&secim);
	switch(secim){
		
		case 1:
			printf("Bir sayi giriniz");
			scanf("%d",&sayi);
			printf("%d'ye kadar bulunan asal sayilar : \n",sayi);
			for (int i=2;i<=sayi;i++){
				if(asal_mi(i)){
					printf("%d",i);
					
				}
			}
			printf("\n");
			break;
			
			case 2:
				printf("bir sayi giriniz");
				scanf("%d",&sayi);
				printf("%d sayisinin faktoriyeli= %d\n",sayi,faktoriyel(sayi));
				
				case 3:
					printf("vize notu giriniz");
					scanf("%d",vize);
						printf("final notu giriniz");
								scanf("%d",final);
								not_hesapla(vize,final);
								break;
								
								default:
									printf("gecersiz secim yapildi\n");
								    break;
									
	}
	return 0;
	
	}

