#include <stdio.h>

int main() {
	char n[105],n2[105];
	double h,h2;
	int a,a2;
	scanf("%s %lf %d %s %lf %d", n, &h, &a, n2, &h2, &a2);

	printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\n", n, h, a);
	printf("Name 2: %s\nHeight 2: %.2lf\nAge 2: %d\n", n2, h2, a2);
	return 0;
}


