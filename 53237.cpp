#include <stdio.h>
#include <ctype.h>

int main ()
{	
	char str[10000];
	scanf ("%[^\n]", str);
	getchar();			
	for (int i=0; str[i]!=0; i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i] -=32;			
		}		
		if (str[i] == 'I'){
			printf ("1");
		} else if (str[i] == 'R'){
			printf ("2");
		} else if (str[i] == 'E'){
			printf ("3");
		} else if (str[i] == 'A'){
			printf ("4");
		} else if (str[i] == 'S'){
			printf ("5");
		} else if (str[i] == 'G'){
			printf ("6");
		} else if (str[i] == 'T'){
			printf ("7");
		} else if (str[i] == 'B'){
			printf ("8");
		} else if (str[i] == 'P'){
			printf ("9");
		} else if (str[i] == 'O'){
			printf ("0");
		} else {
			printf ("%c", str[i]);	
		}
	}	
	printf ("\n");		
	return 0;
}
