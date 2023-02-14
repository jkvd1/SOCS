#include<stdio.h>
#include <math.h>
#include <string.h>

int main()
{
//    int marks[10];
//    int i;
//    scanf("%d",&i);
//	
//    while(i--)
//    {
//        scanf("%d",(marks+i));
//    }
    
    int mark[10][10];
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d %d",(mark+t));
    }
    
    while(t--)
    {
        printf("Case #%d:%d %d",*(mark+t));
    }

    return 0;
}
