#include <stdio.h>
#include <string.h>

void tuk(int n,char str[100]){
	char aw=str[0];
	char ak=str[n-1];
	printf("%c%c\n",ak,aw);
	
}

int main(){

 char aa[100],bb[100],cc[100];
 int a,b,c;
 scanf("%d %s",&a,aa);
 scanf("%d %s",&b,bb);
 scanf("%d %s",&c,cc);
 
 tuk(a,aa);
 tuk(b,bb);
 tuk(c,cc);
 return 0;
 
}

