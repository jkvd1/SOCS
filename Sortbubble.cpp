#include <stdio.h>

void bubble(int *arr,int size){
	int i,j;
	for(i=1;i<j;i++){
		for(j=size-1;j>=i;j--){
			if(arr[j-1]<arr[j]){
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main() {
	int arr={23,51,67,99};
	bubble(arr,sizeof(arr));
	for(int i=0;i<5;i++){
	printf("%d", arr);
	}
	return 0;
}

