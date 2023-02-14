#include <stdio.h>

int main() {
	for(int i=0;i<3;i++){
    int num;
    scanf("%d", &num); 

    int middle = (num % 100) / 10; 
    printf("%d\n", middle);
}
    return 0;
}
