#include <stdio.h>

int main() {
	FILE *fp=fopen("testdata.in","r");
	
	int tc,angka[1001],total;
	fscanf(fp,"%d",&tc);
	for(int i=0;i<tc;i++){
		fscanf(fp,"%d",&angka[i]);
		total+=angka[i];
	}
	printf("%d",total);
	fclose(fp);
	return 0;
}

