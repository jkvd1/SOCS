#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    int i;
    int n;
    int num;
    char * ptr;
    char name[2000];
    char initial[2000][2000];
    char str[2000];
    scanf("%d", &n);
    getchar();
    
    for(i = 0; i < n; i++) {
        scanf("%[^\n]", name);
        getchar();
        ptr = strtok(name, " ");
        num = 0;
        while(ptr != NULL)
        {
            strcpy(str, ptr);
            initial[i][num] = toupper(str[0]);
            num++;
            ptr = strtok(NULL, " ");
        }
    }
    
    for(i = 0; i < n; i++) {
        printf("Case #%d: %s\n", i+1, initial[i]);
    }

    return 0;
}
