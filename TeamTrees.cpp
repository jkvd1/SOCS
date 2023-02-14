#include <stdio.h>

int sum(int x,int *y){
	int hasil=0;
	for(int i=0;i<x;i++){
		hasil+=y[i];
	}
	return hasil;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        int x;
        scanf("%d", &x);
        int y[x];
        for(int j=0;j<x;j++){
		   scanf("%d",&y[j]);
	   }
        int res;
	   res = sum(x,y);
        printf("Case #%d: %d\n", i + 1, res);
    }
    return 0;
}

