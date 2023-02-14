#include <stdio.h>

int main() {
	int tc,ctr=1;
	scanf("%d", &tc);
	while(tc--){
		long long r;
		int t=0;
		scanf("%lld", &r);
		do{
		t++;
		r/=10;
		}
		while(r!=0);

		printf("Case #%d: %d\n", ctr,t);
		ctr++;
	}
	return 0;
}

