#include <stdio.h>

int main() {
	char *path="C://Users//renda//Documents/Binus Docs//AlgoProg//record.txt";
	
	FILE *fp=fopen(path,"r");
	
	if(fp==NULL){
		printf("Error");
		return 0;
	}
	
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
	return 0;
}

