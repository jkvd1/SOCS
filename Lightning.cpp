#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
	int T;
	fscanf(fp, "%d", &T);
	for(int i = 1; i <= T; i++){
		int time, min, max;
		fscanf(fp, "%d %d %d", &time, &min, &max);
		char str[10005];
		fgetc(fp);
		fscanf(fp, "%[^\n]", str);
		int len = strlen(str);
		int sum = 0;
		int total = 0;
		for(int j = 0; j < len; j++){
			if(str[j] == '1'){
				sum++;
			}
			if(str[j+1] == '0' || str[j+1] == '\0'){
				if(sum >= min && sum <= max) total++;
				sum = 0;
			}
		}
		printf("Case #%d: %d\n", i, total);
	}
	fclose(fp);
	return 0;
}
