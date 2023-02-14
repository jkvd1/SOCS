#include <stdio.h>

int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int array[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == key) {
            return mid;
        } else if (array[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

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
int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int size = sizeof(array) / sizeof(array[0]);
int key;

	printf("insert key: ");
	scanf("%d", &key);

    printf("Linear Search: index ke %d\n", linearSearch(array, size, key));
    printf("Binary Search: index ke %d\n", binarySearch(array, size, key));
    printf("Interpolation Search: index ke %d\n", interpolationSearch(array, size, key));
return 0;
}
