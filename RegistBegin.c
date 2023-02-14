#include <stdio.h>
#include <string.h>

int main()
{
    char id[101],n[101];
    char kelas;
    int num;

    scanf(" %s", id);
    scanf(" %[^\n]", n);
    scanf(" %c %d", &kelas, &num);

    printf("Id    : %s\n", id);
    printf("Name  : %s\n", n);
    printf("Class : %c\n", kelas);
    printf("Num   : %d\n", num);
    return 0;
}