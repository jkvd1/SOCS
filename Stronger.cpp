#include <stdio.h>

int main() {
    long tc;
    long total=0;
    scanf("%ld", &tc); 
    total+=100*tc;
        for (int i = 1; i < tc; i++) {
            total += 50*i;
        }
        printf("%ld\n", total);
    return 0;
}
