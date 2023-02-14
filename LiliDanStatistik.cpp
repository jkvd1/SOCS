#include <stdio.h>

int main (){
    FILE *fp = fopen("testdata.in", "r");
    
    int pengulangan;
    scanf ("%d", &pengulangan);
    
    int angka[1001];
    int total;
    
    for (int i = 0; i<pengulangan; i++){
        scanf("%d", &angka[i]);
        total += angka[i];
    }
    printf ("%d", total);
    fclose(fp);
    
    return 0;
}
