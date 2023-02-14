#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		int N;
		scanf("%d", &N);
		int total = 1;
		printf("Case %d: ", i);
		for(int j = 0; j < N; j++){
			total += j;
			printf("%d", total);
			if(j == N - 1) printf("\n");
			else printf(" ");
		}
		
	}
	return 0;
}
