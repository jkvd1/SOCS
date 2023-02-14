#include <stdio.h>

int main()
{
    int i, j, m;
    
    scanf("%d", &m);
    
    int matrix[m][m];

    for (i = 0;i< m;i++)
    {
        for (j=0;j<m;j++)
        {
		  scanf("%d", &matrix[i][j]);
        }
	}
     
	for (i = 0; i < m; i++){
     	for (j = 0; j < m; j++){
			printf("%d", matrix[j][i]);
          	if(j<m-1){
          		printf(" ");
            	}else{
            		printf("\n");
			}
        	}
    	}
     return 0;
}
