#include <stdio.h>

int main() {
	long int p,price, s, result;
	scanf("%ld %ld %ld", &p, &price, &s);
	getchar();
		

	for(int i = 0; i < s; i++) {
//		if(i == 0) {
//			result = price / p * 0.05 + price;
//		} else {
//			result = result / p * 0.05 + result;
//		}
	result = price/p*0.05;
	result += price;
	result = price;
		
	}
	printf("%ld", result);
	return 0;
}

