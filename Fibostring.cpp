#include <stdio.h>
#include <string.h>
int main(){
	
	char str[100][1000];
	
	int tc;
	scanf("%d", &tc); getchar();
	for(int i = 1; i<= tc; i++){
		int len;
		char a[5], b[5];
		scanf("%d %s %s", &len, a, b); getchar();
		
		//printf("%s %s\n", a, b);
		strcpy(str[0], a);
		strcpy(str[1], b);
		
		for(int j = 2 ; j <= len; j++){
			strcpy(str[j], str[j-1]);
			strcat(str[j], str[j-2]);
		}
		
		printf("Case #%d: %s\n", i, str[len]);
		
		
	}
	
	return 0;
}
