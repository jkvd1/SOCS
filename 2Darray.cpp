#include<stdio.h>

int main()
{
	int x,y,tc,a,b,c;
	scanf("%d %d %d", &x, &y, &tc);
	int matrix[x][y];
	
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			matrix[i][j]=0;
		}
	}
	
	for(int i=0; i<tc; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		matrix[a][b]=c;
	}
	
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			if(j==y-1)
			{
				printf("%d\n", matrix[i][j]);
			}
			else
			{
				printf("%d ", matrix[i][j]);
			}
		}
	}
	
	return 0;
}
