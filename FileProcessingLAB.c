//FILE PROCESSING

#include<stdio.h>
#include <string.h>

//.txt .csv .in

int main(){

    //fopen() -> membuka file
    //fclose() -> menutup stream file
    //feof() -> akhir file
    // 3 mode : r (baca), w(tulis), a(append)
    // FILE *file = fopen("test.txt","r");
    // FILE *file = fopen("test.txt","w");
    FILE *file = fopen("test.txt", "a");

    if(file==NULL) printf("File not found");
    else{

        // while (!feof(file)){
        // char nama[100];
        // int umur = 12;
        //     fscanf(file, "%[^#]#%d\n", nama,&umur);
        //     printf("%s : %d\n",nama,umur);
        // }

        // fprintf(file,"%s#%d\n");
        char nama[40]= "Darwin";
        int umur = 50;
        fprintf(file, %s#%d\n, nama,umur);
        printf("File found");
    }

    fclose(file);
    return 0;
}