#include <stdio.h>

int interpolationSearch(int array[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high && key >= array[low] && key <= array[high]) {
        mid = low + ((key - array[low]) * (high - low)) / (array[high] - array[low]);
        if (array[mid] == key) {
            return mid;
        	} else if (array[mid] < key) {
	   	low = mid + 1;
		} else {high = mid - 1;}
		}
	return -1;
}

int main() {
	int tc,ctr=1;
	scanf("%d", &tc);
	while(tc--){
		
		
		int res;
		printf("Case #%d: %d", ctr);
		ctr++;
	}
	return 0;
}

