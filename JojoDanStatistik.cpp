#include <stdio.h>

int main (){
    FILE *fp = fopen("testdata.in", "r");
    
    int tc;
    fscanf (fp,"%d", &tc);
    
    int angka[1001];
    int total;
    
    for (int i = 0; i<tc; i++){
        fscanf(fp,"%d", &angka[i]);
        total += angka[i];
    }
    
    printf ("%d\n", total);
    fclose(fp);
    
    return 0;
}
