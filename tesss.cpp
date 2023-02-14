#include <stdio.h>

int main() {
	int N,Q;
	scanf("%d %d",&N,&Q);
	
	long A[N];
	for(int i=0;i<N;i++){
		scanf("%ld",&A[i]);
	}
	
	long X;
	for(int i=0;i<Q;i++){
		scanf("%ld",&X);
		
		int F=-2;
		for(int L=0,R=N-1,M;L<=R;){
			M=(L+R)/2;
			
			if(A[M]==X){
				F=M;
				L=M+1;
			}else if(A[M]<X){
				L=M+1;
			}else{
				R=M-1;
			}
		}
		printf("%d\n",F+1);
		
	}
	
	}
	return 0;
}

