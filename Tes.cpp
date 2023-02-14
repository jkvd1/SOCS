#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
		printf("0\n");
		return 0;
	}else{
    printf("-1\n");
    }
    return 0;
}

