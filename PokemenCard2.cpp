#include <stdio.h>

int main() {
	double a,b;
	scanf("%lf %lf", &a,&b);
	double res=a/b;
	printf("%0.2lf%%\n",res*100);
	return 0;
}

