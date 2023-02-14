#include <stdio.h>

int toString(char []);

//int main (){
//    long long int tc, tc1, angka;
//    scanf("%lld", &tc);
//    for(int i = 0; i < tc; i++){
//        long long int sum = 0;
//        scanf("%lld", &tc1);
//        for(int j = 0; j < tc1; j++){
//            scanf("%lld", &angka);
//            sum += angka;
//        }
//        printf("Case #%lld: %lld\n", i+1, sum);
//    }
//    return 0;
//}

int main (){
    long long int tc, tc1;
    int n;
    char a[1000];
    scanf("%lld", &tc);
    for(int i = 0; i < tc; i++){
        long long int sum = 0, k;
        scanf("%lld %lld", &tc1, &k);
        for(int j = 0; j < tc1; j++){
            scanf("%s", a);
            n = toString(a);
            sum += k;
            while(sum>=25){
            	sum -=26
		  }
		  a = toString(n);
		  
        }
        printf("Case #%lld: %lld\n", i+1, sum);
    }
    return 0;
}

int toString(char a[]) {
  int c, sign, offset, n;

  if (a[0] == '-') {  
    sign = -1;
  }

  if (sign == -1) {  
    offset = 1;
  }
  else {
    offset = 0;
  }

  n = 0;

  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }

  if (sign == -1) {
    n = -n;
  }

  return n;
}
