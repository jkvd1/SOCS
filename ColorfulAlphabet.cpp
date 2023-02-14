#include <stdio.h>

int main() {
	int tc,ctr=1;
	scanf("%d", &tc);
	while(tc--){
	int i, n;
    	char c;
    	scanf("%d", &n);

    	c = 'a';
    	
	printf("Case #%d: ", ctr);
	
	for (i = 1; i <= n; i++){
		printf("%c", c);
     	c++;
    	}
		ctr++;
    	printf("\n");
		
	}
	return 0;
}

