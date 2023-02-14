#include <stdio.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		getchar();
		char str[1005];
		scanf("%[^\n]", str);
		int length = strlen(str);
		printf("Case #%d: ", i);
		for(int j = 0; j < length; j++){
			if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' ||
				str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' ){
				continue;
			}
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}
