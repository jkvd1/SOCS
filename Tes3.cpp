 #include <stdio.h>
 #include <string.h>

 int main()
 {
   int i;
   int counter=0, counter2=0;
   char *s1;
   char *s2;
   char name[1000];
   char vowel[6] = "aiueo";
   char consonants[] = "bcdfghjklmnpqrstvwxyz";
   
   gets(name);

   for (i=0; i<strlen(name); i++) {
     if (s1 = strchr(vowel, name[i])) {
       counter++;
       *s1='0';
     }
     else if (s2 =strchr(consonants, name[i])) {
       counter2++;
       *s2='0';
     } 
   }
   	printf ("Vocal: %d\n", counter);
     printf ("Consonant: %d\n", counter2);
     return 0;
 }

