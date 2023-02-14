#include <stdio.h>
#include<string.h>

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
    
    for(i=0;kalimat[i];i++)  
    {
    	if(kalimat[i]==c)
    	{
          count++;
		}
 	}
     
	printf("karakter '%c' muncul %d kali \n ",c,count);
	return 0;
}

