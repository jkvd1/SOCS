#include <stdio.h>

int main() {
	double l,b,h;
	scanf("%lf %lf %lf", &l,&b,&h);
	printf("%.3lf\n", 2*b*h/2+b*3*l);
	return 0;
}

