#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	printf("%d", a);
	printf("%s", " plus ");
	printf("%d", a);
	printf("%s", " is ");
	printf("%d\n", a+a);
	printf("%s", "minus one is ");
	printf("%d\n", a+a-1);

	return 0;
}