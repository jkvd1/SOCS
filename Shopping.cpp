#include<stdio.h>

int main(){
    
double a1,a2,a3,a4,a5,a6,a7,a8;
    
scanf("%lf %lf", &a1, &a2);
scanf("%lf %lf", &a3, &a4);
scanf("%lf %lf", &a5, &a6);
scanf("%lf %lf", &a7, &a8);

printf("$%.2lf\n",a2*100/(100-a1));
printf("$%.2lf\n",a4*100/(100-a3));
printf("$%.2lf\n",a6*100/(100-a5));
printf("$%.2lf\n",a8*100/(100-a7));
    
    
    return 0;
}
