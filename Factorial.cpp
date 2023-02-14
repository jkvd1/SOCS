#include <stdio.h>

long long int factorial(int n){
    long long f = 1;
 
    for(int i = 1; i <= n; i++){
        f = (f*i) % 1000000007;  
    }
    return f % 1000000007;
}

int main(){
	
	int tc;
	scanf("%d", &tc);
		
	for(int i = 1; i <= tc; i++){
		int n;
		long long total = 1, a;
		scanf("%d", &n);
		
		for(int j = 0; j < n; j++){
			scanf("%lld", &a);
			total = (total*factorial(a))%1000000007;
			//printf("%d\n", total);
		}
		printf("Case #%d: %llu\n", i, total%1000000007);
	}
	
	return 0;
}
