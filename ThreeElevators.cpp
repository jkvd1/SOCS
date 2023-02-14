#include <stdio.h>

int main() {
	long a, b, c;
	scanf("%ld %ld %ld", &a, &b, &c);
	if ((a+b+c)%3==0) {
	int i = 0;
	while(a != b || b != c || a != c) {
		a++;
		b--;
		i++;
		if (i > 100) {
			printf("-1\n");
			return 0;
		}
	}
		printf("%d\n", i);
	} else {
		printf("-1\n");
	}
return 0;
}
