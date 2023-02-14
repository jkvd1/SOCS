#include <stdio.h>

int min(int array[], int size) {
    int flag = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < flag) {
            flag = array[i];
        }
    }
    return flag;
}


int main() {
	int array[]={20,80,100,200,150,4,1};
	int size = sizeof(array) / sizeof(array[0]);
	printf("%d",min(array,size));
	return 0;	
}

