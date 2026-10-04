#include<stdio.h>
int main (){
	int a,b,c;
	printf("Uc ic aci yaziniz :");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a > 0 && b > 0 && c > 0 && a < 180 && b < 180 && c < 180); {
			if(a+b+c == 180);
	printf("Yazdiginiz aci uygundur %d,%d,%d\n",a,b,c);
	}else{
		printf("Yazdiginiz sayilar ucgenin ic acileri icin uygun degildir.\n");
	}
	}else{
	printf("Girdiginiz sayilardan biri 0 veya 180'den buyuk olamaz\n'");
	}
	return 0;
}

