#include <stdio.h>

long long int fractal(int x) {
long long int a = 0, b = 1, c = 0;
for (int i = 2; i <= x; i++) {
c = a + b + i;
a = b;
b = c;
}
return c;
}

int main() {
int n;
scanf("%d", &n);
long long int result = fractal(n);
printf("%lld", result);
return 0;
}
