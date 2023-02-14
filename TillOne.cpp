#include <stdio.h>

int jojo(int n){
	if(n==1){
		return 1;
	}else if(n%2==0){
		return jojo(n/2);
	}else{
		return jojo(n-1)+jojo(n+1);
	}
}

int main() {
	int tc;
	scanf("%d", &tc);
	for(int i=0; i<tc;i++){
		int res,n;
		scanf("%d", &n);
		res=jojo(n);	
		printf("Case #%d: %d\n",i+1,res);
	}
	return 0;
}

