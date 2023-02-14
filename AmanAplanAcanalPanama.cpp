#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (str[start] != str[end]) {
        return 0;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    int tc;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++){
    	char str[1001];
    	scanf("%s", str);
    	int len = strlen(str);
    	if (isPalindrome(str, 0, len - 1)) {
        printf("Case #%d: yes\n",i+1);
    	} else {
        printf("Case #%d: no\n",i+1);
    	}
    }
    return 0;
}

