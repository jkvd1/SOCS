#include<stdio.h>

void selection(int *arr){
	for(int i=0;i<10;i++){
		int min=i;
		for(int j=i+1;j<11-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
				int temp=arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
		}
	}	
	
}

int main(){
    
}