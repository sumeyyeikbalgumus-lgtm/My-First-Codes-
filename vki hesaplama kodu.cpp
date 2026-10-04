#include<stdio.h>
int main(){
float boy,kilo,vki_hesaplama;
printf("Kilonuzu giriniz :");
scanf("%f",&kilo);
printf("Boyunuzu giriniz :");
scanf("%f",&boy);
boy=boy/100;
vki_hesaplama=(kilo/(boy*boy));
if(vki_hesaplama>25){
printf("kilonuz boyunuza gore fazladir");
}else
	printf("kilonuz boyunuza gore iyidir");


return 0;
}



