#include<stdio.h>
#include<math.h>
int main(){
	
	int a;
	double dairealani;
	
	printf("Bir sayi giriniz");
	scanf("%d",&a);
	
	dairealani=3*14*pow(a,2);
	
	if(a > dairealani){
		
	printf("Yazdiginiz sayi dairenin alanindan buyuktur.");
	
	} else if (a ==dairealani){
		
		 printf("Yazdiginiz sayi dairenin alanina esittir.\n");
	 
	}else{

	
		;printf("Yazdiginiz sayi dairenin alanindan kucuktur.");

}
	return 0;
}
