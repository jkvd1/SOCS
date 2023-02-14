#include<stdio.h>

int main(){
	long long int test, i, j, k, p, b, count, gFloor, cFloor;
	char stage[10001];
	scanf("%lld", &test);
	
for(i = 0; i < test; i++){
	scanf("%lld %lld", &p, &b);
	scanf("%s", stage);
		
	count = 0;
	gFloor = -1;
	cFloor = -1;
		
	for (j = 0; j < p; j++){
		if (gFloor == -1){
			if (stage[j] == '1'){
				gFloor = j + 1;
			}
		}
		if (stage[j] == '1'){
			count++;
		}
	}
		
	for (k = p - 1; k > p - b - 1; k--){
		if (cFloor == -1){
			if (stage[k] == '1'){
				cFloor = k + 1;
			}
		}
	}

	if(p <= b){
		printf("Case #%lld: Alive\n", i+1);
	}else if(count == 1){
		printf("Case #%lld: Dead\n", i+1);
}else if((gFloor <= b) && (cFloor > p - b)){
		printf("Case #%lld: Alive\n", i+1);
	}else{
		printf("Case #%lld: Dead\n", i+1);
	}
}
	
	return 0;
}
