#include <stdio.h>
#include <string.h>

int main() {
	int tc;
	scanf("%d",&tc);
	
	for(int i=0;i<tc;i++){
		int j=0;
		
		char kata[1000];getchar();
		scanf("%s", kata);
		
		int len = strlen(kata);
		int c=0;
		
		for(j=0;j<len/2;j++){
			if(kata[j]==kata[len-j-1]){
			c++;
			}
			
		}
		if(c==j)
			printf("Case #%d: Yay, it's a palindrome\n",i+1);
		else
			printf("Case #%d: Nah, it's not a palindrome\n",i+1);
	}
}

