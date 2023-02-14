#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
 int T;
	fscanf(fp, "%d", &T);
	for(int i = 0; i < T; i++){
		fgetc(fp);
		char str[105];
		fscanf(fp, "%s", str);
		
		int len = strlen(str);
		int N;
		fscanf(fp, "%d", &N);
		
		char a[30], b[30];
		int freq[27] = {0};
		for(int j = 0; j < N; j++){
			fgetc(fp);
			fscanf(fp, "%c %c", &a[j], &b[j]);
		}
		
		int check[30] = {0};
		for(int j = 0; j < N; j++){
			if(check[a[j] - 'A'] == 0){
				check[a[j] - 'A'] = 1;
				for(int k = 0; k < len; k++){
					if(str[k] == a[j]){
					str[k] = b[j];
					}
				}
			}
		}
		
		for(int j = 0; j < len; j++){
			freq[str[j]-'A']++;
		}
		
		for(int j = 0; j < 27; j++){
			if(freq[j] > 0) printf("%c %d\n", j+'A', freq[j]);
		}
	}
	fclose(fp);
	return 0;
}
