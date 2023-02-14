#include <stdio.h>

int m = 0;

int lili(int n) {
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    if(n%3==0){
        if(n==3){
	   m++;
	   }
        return lili(n-n/3)+1;
    }else if(n==4){
        m++;
        return lili(n - 1) + n + lili(n - 2) + 1;
    }else {
        return lili(n - 1) + n + lili(n - 2) + 1;
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        int res;
        scanf("%d", &res);
        res = lili(res);
        printf("Case #%d: %d %d\n", i + 1, res, m);
        m = 0;
    }
    return 0;
}

