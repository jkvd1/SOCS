#include <stdio.h>
int main()
{
    long long int i, j, k, size;
    scanf ("%lld", &size);   
	long long int arr[size];

	for(i=0 ; i<size ; i++){
		scanf("%lld", &arr[i]);
	}
	for(i=0 ; i<size ; i++){
		for(j=i+1 ; j<size ; j++){
			if(arr[i] == arr[j]){
				for(k=j ; k<size-1 ; k++){
					arr[k] = arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
	printf("%lld\n", size);
	return 0;
}
