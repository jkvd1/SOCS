#include <stdio.h>

int fun(long n) {
    int m = 0;
    while(n != 1) {
        m++;
        n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
    }
    return m;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        long n;
        scanf("%ld", &n);
        int m = fun(n);
        if(m % 2 == 0) printf("Case #%d: Lili\n", i + 1);
        else printf("Case #%d: Jojo\n", i + 1);
    }
    return 0;
}

