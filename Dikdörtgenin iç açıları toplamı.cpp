#include<stdio.h>
int main(){
	int a,b,c,d,dikdortgenicacitop;
	
	printf("4 adet ic aci giriniz :\n\n\n\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	   dikdortgenicacitop=a+b+c+d;
	   
     	if(a+b+c+d==360){
    	printf("Yazdiginiz sayilar bir dikdortgen elde etmektedir.\n");
	}else {
     	( a+b+c+d==!360 && a+b+c+d >360 && a+b+c+d<360)
	     ;printf("Yazdiginiz sayilar bir dikdortgen elde etmemektedir.");
	}
	return 0;
}
