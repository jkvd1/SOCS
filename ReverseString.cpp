#include <stdio.h>
#include <string.h>
int main() {
    long int n;
    char str[2000];
    scanf("%ld", &n);
    getchar();
    for(long int i = 0; i < n; i++) {
        scanf("%[^\n]", str);
        getchar();
        printf("Case #%ld: ", i+1);
        for(long int a = strlen(str) - 1; a >= 0; a--) {
            printf("%c", str[a]);
        }
        printf("\n");
    }
  return 0;
}
