#include <stdio.h>
#include <string.h>


int main() {
	int tc,ctr=1;
	scanf("%d",&tc);
	
	while(tc--){
    
    char a[101], b[101];
    int n, s = 0;
    
    scanf("%d", &n);
    scanf("%s", a);
    scanf("%s", b);
    
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            s++;
        }
    }
    
    int res = (s * 100) / n; 
		
		printf("Case #%d: %d\n", ctr,res);
		ctr++;
	
	}
	
	return 0;
}

