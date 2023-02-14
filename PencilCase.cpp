#include <stdio.h>

int main() {
	long long int tc,counter=1;
	scanf("%lld",&tc);

	while(counter<=tc){
		int r,h,res;
		scanf("%d %d", &r,&h);
		printf("Case #%d: %0.2lf\n",counter,(r+h)*2*r*3.14);
		counter++;
	}
	return 0;
}

