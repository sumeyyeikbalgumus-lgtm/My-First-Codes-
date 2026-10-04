#include<stdio.h>
int main (){
	int a,b;
	printf("iki sayi giriniz :");
	scanf("%d\n,%d \n",&a,&b);
	while(a!=b){
		if(a>b)
		a=a-b;
		else
		b=b-a;
		printf("EBOB=%d\n",a);
		
	}
	return 0;
}

