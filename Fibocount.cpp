#include<stdio.h>

int counter = 0;

int sumFibo(int a)
	{
    counter++;
    if(a <= 1) return a;
    return sumFibo(a-1)+sumFibo(a-2);
	}

int main()
{
	int tc, angka;
    scanf("%d", &tc);
    for(int i = 0; i < tc; i++)
	{
        scanf("%d", &angka);
        sumFibo(angka);
        printf("Case #%d: %d\n", i+1, counter);
        counter = 0;
    }
	
	return 0;
}
