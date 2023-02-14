#include <stdio.h>

int main() {
	int a,b,c,d,e,f,g,h,i,j,k,l;
	double res=0, res2=0,res3=0;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%d %d %d %d",&e,&f,&g,&h);
	scanf("%d %d %d %d",&i,&j,&k,&l);
	
	res+=a*2;
	res2+=e*2;
	res3+=i*2;
	
	res+=b*2;
	res2+=f*2;
	res3+=j*2;
	
	res+=c*2;
	res2+=g*2;
	res3+=k*2;
	
	res+=d;
	res2+=h;
	res3+=l;
	
	printf("%.2lf\n",res);
	printf("%.2lf\n",res2);
	printf("%.2lf\n",res3);
	return 0;
}

