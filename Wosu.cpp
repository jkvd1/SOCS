#include <stdio.h>

int main() {
	int a;
	double b;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
	b += 100+i*50;
	}
	
	printf("%.0lf\n",b);
	return 0;
}

//scanf x
//make 100+50*x
