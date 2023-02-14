#include <stdio.h>

int main(){
	
	int kesempatan, dadu, tempat = 0;
	scanf("%d", &kesempatan);
	
	for (int i=0; i<kesempatan ; i++ ){
		scanf("%d", &dadu);
		tempat += dadu;	
	if(tempat==30) tempat = 10;
	if(tempat==12) tempat = 28;
	if(tempat==35) tempat = 7;
	if(tempat>=40) tempat = tempat - 40;	
	}
	 
	 printf("%d\n", tempat);
	
	
	return 0;
}
