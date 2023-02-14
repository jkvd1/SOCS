#include <stdio.h>

//Recursion lab

int fibonacci(int n) {
	if(n<2)
	return n;
	else return fibonacci(n-1)+fibonacci(n-2);
}

int factorial(int n){
	if(n==0)return 1;
	else return (n*factorial(n-1));
	
}

char map[100][100];
int N;
int countOne;

void floodfill(int a,int b){
	//base case
	if(map[a][b]=='0'||a<0||b<0||a>N||b>N)return;
	
	if(map[a][b]=='1'){
		countOne++;
	}
	map[a][b]='0';//visited
	
	floodfill(a-1,b);
	floodfill(a+1,b);
	floodfill(a,b+1);
	floodfill(a,b-1);
}

int main(){
//	for(int j=0;j<50	;j++)
//	printf("%d\n",factorial(j));

	scanf("%N",&N);
	getchar();
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%c",&map[i][j]);
			getchar();
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(map[i][j]=='P'){
				int x=i;
				int y=j;
				floodfill(x,y);
				break;
			}
		}
	}
	
	printf("Count One: %d\n", CountOne)floodfill()
}
