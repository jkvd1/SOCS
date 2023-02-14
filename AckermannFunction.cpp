#include <stdio.h>

int func(int m, int n){
	if(m==0){
		return n+1;
	}else if(m>0&&n==0){
		return func(m-1,1);
	}else if(m>0&&n>0){
		return func(m-1,func(m,n-1));
	}
}

int main() {
	int m,n;
	scanf("%d %d", &m,&n);
	printf("result: %d\n", func(m,n));
	
	return 0;
}

