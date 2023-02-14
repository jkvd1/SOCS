#include <stdio.h>

int main() {
	int tc, res=0,ctr=0;
	scanf("%d",&tc);
	for(int i=0;i<tc;i++){
		int n,m;
		scanf("%d %d",&n,&m);
		while(n--){
			int a;
			scanf("%d",&a);
			if(a[i]<=m){
				m--;
				res++;
			}
		}
		ctr++;
	}
	printf("Case #%d: %d",ctr,res);
	return 0;
}

