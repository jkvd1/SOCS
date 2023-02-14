#include <stdio.h>

int main() {
    char name[500];
    char nis[500];
    int age;
    
    scanf("%[^\n]*s", &name);
    getchar();
    scanf("%s %d", &nis, &age);
    getchar();
    
    printf("Name: %s\n", name);
    printf("NIS: %s\n", nis);
    printf("Age: %d\n", age);
    
    return 0;
}
