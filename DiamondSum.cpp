#include <stdio.h>

int main() {
 double x,a,b,c,d,e,f,g,h,i,j,k,l;
 scanf("%lf",&x);
 scanf("%lf %lf %lf %lf",&a,&b,&c,&d );
 scanf("%lf %lf %lf %lf",&e,&f,&g,&h );
 scanf("%lf %lf %lf %lf",&i,&j,&k,&l );
 
 printf("%.2lf\n", (a*2)+(b*2)+(c/3*4)+(d/2));
 printf("%.2lf\n", (e*2)+(f*2)+(g/3*4)+(h/2));
 printf("%.2lf\n", (i*2)+(j*2)+(k/3*4)+(l/2));
 return 0;
}

