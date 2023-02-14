#include<stdio.h>

int main()
{	
	long int c;
	scanf("%ld", &c);
	for(int i=0;i<c;i++){
		int angka;
		scanf("%d", &angka);
		
		long long int result[angka]={0};
		result[0]=1;
		result[1]=1;
		
		for(long int j=2;j<angka;j++){
			result[j]=result[j-1]+result[j-2];
		}
		for(long int j=0;j<angka;j++){
			if(j==(angka-1)){
				printf("%lld", result[j]);	
			}
			else{
				printf("%lld ", result[j]);
			}
		}
		printf("\n");
	}		
	return 0;
}
