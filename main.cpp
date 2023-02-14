#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch; 
	FILE *fp;
	
	fp=fopen("C://Users//renda//Documents//Binus Docs//AlgoProg//ashiap.txt","r");
	
	if(fp==NULL){
		printf("File txt can't be opened\n");
		return 0;
	}
	
	while(!feof(fp)){
		ch=fgetc(fp); 
		printf("%c",ch);
	}
	
	fclose(fp);
	return 0;
}

