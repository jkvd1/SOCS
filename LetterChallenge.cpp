 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){ 
 char *name;
 name = (char*)malloc(1000005 * sizeof(name));
 scanf("%[^\n]sj",name);
 int s[26];

   for (int i=0; i<26; i++) s[i]=0;
   
   for(int i = 0; name[i] != '\0'; i++){
			s[name[i] - 'a'] = 1;
	}
	
   int x = 0, y = 0;
		for(int j = 0; j < 26; j++){
			if(s[j]){
				if(j == 'a' - 'a' ||
					j == 'u' - 'a'||
					j == 'i' - 'a' ||
					j == 'e' - 'a' ||
					j == 'o' - 'a'){
					x++;
				}else{
					y++;
				}
			}
		}
   	printf ("Vocal: %d\n", x);
     printf ("Consonant: %d\n", y);
	return 0;
 }

