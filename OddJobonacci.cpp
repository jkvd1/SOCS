#include <stdio.h>

int jobo(int n){
	
	if(n==0){
		return 0;
	}else if(n==1||n%2!=0){
		return 1;
	}else if(n>=1 && n<=25){
		return jobo(n-1) + jobo(n-2);
	}
	
	
}
int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d\n",jobo(n));	
	
	return 0;
}
