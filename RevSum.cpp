#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	
	
	for(int i=1;i<x+1;i++){
		long int summ = 0;
		long int sum = 0;
		long int remainder=0,rev = 0;
		scanf("%ld",&summ);
			sum = summ;
		 	while (summ != 0) {
   				remainder = summ % 10;
    			rev = rev * 10 + remainder;
    			summ /= 10;
		}
		printf("Case #%d: %ld\n",i, rev+sum);
	}

	return 0;
}
