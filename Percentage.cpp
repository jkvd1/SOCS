#include <stdio.h>

int main() {
	double x,a,b,c,d,e,f;
	scanf("%lf",&x);
	scanf("%lf %lf",&a,&b);
	scanf("%lf %lf",&c,&d);
	scanf("%lf %lf",&e,&f);
	
    	printf("%.2lf\n",a/100*b);
    	printf("%.2lf\n",c/100*d);
    	printf("%.2lf\n",e/100*f);
    return 0;
}
