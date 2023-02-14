#include <stdio.h>

int main() {
	FILE *fp=fopen("testdata.in","r");
	
	int tc,total=0;
	
	fscanf(fp,"%d",&tc);
	
	for(int i=0;i<tc;i++){
		int num;
		fscanf(fp,"%d",&num);
		total+=num;
	}
	
	printf("%d\n",total);
	fclose(fp);
	return 0;
}

