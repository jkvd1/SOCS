#include <stdio.h>

long int A(long int arr[],long int x,long int y){
	long int sum = 0;
	for(int i = x ; i<y ; i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	long int ok,i;
	scanf("%ld",&ok);
	
	long int B[ok];
	
	for(i = 0; i<ok ; i++){
		scanf("%ld",&B[i]);
	}
	
	long int temen;
	scanf("%ld",&temen);
	
	for(i = 0; i<temen ; i++){
		long int x,y;
		scanf("%ld %ld",&x,&y);
		printf("Case #%ld: %ld\n",i+1,A(B,x-1,y));
	}
	
	return 0;
}
