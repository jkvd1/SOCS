#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("EVEN\n");
    }else if(num % 2 == 1){
        printf("ODD\n");
	}
    return 0;
}
