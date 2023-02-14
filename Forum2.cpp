#include <stdio.h>

int main() {
 char kalimat[1000],c;

  int i, count=0;

  printf("Kalimat: "); gets(kalimat);

  printf("Mengeja Kalimat:");

  for(i=0;i<strlen(kalimat);i++) 

  {

    printf("%c\n",kalimat[i]); 

  }
    printf("karakter yang ingin dicari: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
     
	printf("karakter '%c' muncul %d kali \n ",c,count);
}

