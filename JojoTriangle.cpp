#include <stdio.h>

int main() {
    long int n;
    long int n1, n2, n3;
    long int largest_n;
    scanf("%ld", &n);
    for(int i = 0; i < n; i++) {
        scanf("%ld %ld %ld", &n1, &n2, &n3);
        getchar();
        if (n1 >= n2 && n1 >= n3) {
            largest_n = 1;
        }
        else if (n2 >= n1 && n2 >= n3) {
            largest_n = 2;
        }
        else {
            largest_n = 3;
        }
        if(largest_n == 1) {
            if(n2 + n3 > n1) {
                printf("BISA\n");
            } else {
                printf("TIDAK BISA\n");
            }
        } else if(largest_n == 2) {
            if(n1 + n3 > n2) {
                printf("BISA\n");
            } else {
                printf("TIDAK BISA\n");
            }
        } else {
            if(n1 + n2 > n3) {
                printf("BISA\n");
            } else {
                printf("TIDAK BISA\n");
            }
        }
    }

  return 0;
}
