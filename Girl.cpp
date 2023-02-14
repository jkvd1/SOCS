#include<stdio.h>
#include<string.h>

void count(char *string){
	int len = strlen(string);
	int x = 0;
	int abc[25];
  	int aa = 97;
	for(int i = aa; i < aa+26; i++){
	    abc[i-aa] = 0;
	}
	for(int i = 0; i < len; i++){
	    abc[string[i]-aa]++;
	}
	for(int i = aa; i < aa+26; i++){
	    if(abc[i-aa]>0){
	        x++;
	    }
	}
	if(x % 2 == 0){
		printf("Yay\n");
	} else{
		printf("Ewwww\n");
	}
}

int main(){
	int tc;
	
	scanf("%d", &tc);
	getchar();
	
	char str[tc][100000];
	for(int i = 0; i < tc; i++){
		scanf("%[^\n]s", &str[i]);
		getchar();
	}
	for(int i = 0; i < tc; i++){
		printf("Case #%d: ", i+1);
		count(str[i]);
	}
	
	return 0;
}
