#include<stdio.h>
#include <string.h>

struct Orang
{
    char tglLahir[15];
};


struct Mahasiswa{
    int umur;
    char nama[50];
    char alamat[50];
    struct Orang org;
}mhs;

union Siswa
{
    int umur;
    char nama[50];  
};


int main(){
    struct Mahasiswa mhs1[10];
    
    mhs1[0].umur=50;
    mhs.umur=30;

    strcpy(mhs1[0].org.tglLahir,"11-10-2022");

    strcpy(mhs.nama, "Marvin");

    // printf("%d", mhs.umur);
    printf("%s\n", mhs.org.tglLahir);

    return 0;
}

