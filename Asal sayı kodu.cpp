#include<stdio.h>
int main (){
	int N,asal=1;
	printf("bir sayi giriniz :");
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		if(N % i==0){
			asal=0;
		}
		
	}
	if(asal==0){
		printf("asal degil");
	}else{
		printf("asal sayidir");
		
	}
	
	

	return 0;
}
