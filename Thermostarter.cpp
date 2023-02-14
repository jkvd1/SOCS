#include <stdio.h>

int main() {
	int tc;
	scanf("%d",&tc);
	while(tc--){
		double x;
		scanf("%lf", &x);
		printf("%.2lf %.2lf %.2lf\n", x*4/5,x*9/5+32,x+273);
	}
	return 0;
}

