#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int *arr){
	for(int i=0;i<11;i++){
		printf("%d",arr[i]);
	}
	printf("\n================\n");
}

void printt(char name[][100]){
	for(int i=0;i<4;i++){
		printf("%s",name[i]);
	}
	printf("\n================\n");
}

void bubble(int *arr){
	for(int i=0;i<11;i++){
		for(int j=0;j<11-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}	
	
}

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

void insertion(int *arr){
	int key, j;
	for(int i=1;i<11;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

void bubblechar(char name[][100]){
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-1-i;j++){
//			strcmp -> - jika kiri < kanan
//					+ jika kanan < kiri
//					== 0 jika sama
//					kiri - kanan
					 
			if(strcmp(name[j],name[j+1])>0){
				char temp[100];
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}	
	
}

int main() {
//	Bubble sort, Selection, Insertion
//	int arr[]={7,6,9,5,10,2,3,1,4,0,8};
//	print(arr);
//	bubble(arr);
//	selection(arr);
//	insertion(arr);
//	print(arr);
	
	
	char name[][100]={"Delta","Alpha","Charlie","Beta","Echo"};
	printt(name);
	bubblechar(name);
	printt(name);
	return 0;
}


// QuickSort

int main() {
	int array[]={19, 7, 15, 12, 16, 18, 4, 11, 13};
	int size=sizeof(array)/sizeof(array[0]);
	quickSort(array,0,size-1);
	mergeSort
	printAll(array,size);

}

void mergeSort(int array[], int low,int high){
	if(low<high){
		int mid=low+(high-low)/2;
		
	}
}

void printAll(int array[],int size){
	for(int i=0;i<size;i++){
		printf
	}
}



































