#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
   int arr[10],mx,mn, i, j, Size, Count = 0;
   
   printf("\n Please Enter Number of elements in an array  :   ");
   scanf("%d", &Size);
   
   printf("\n Please Enter %d elements of an Array  :  ", Size);
   for (i = 0; i < Size; i++)
   {
       scanf("%d", &arr[i]);
       }     
 
   for (i = 0; i < Size; i++)
   {
      for(j = i + 1; j < Size; j++)
      {
          if(arr[i] == arr[j])
          {
             Count++;
            break;
         }
      }
   }

   printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);

    mx = arr[0];
    mn = arr[0];

    for (i = 1; i < Size; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }

        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    printf("\nMaximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);

    printf("Original array: \n");
    printArray(arr, Size);
    printf("Enter the element you want to add to array: ");
    int num;
    Size = Size+1;
    scanf("%d",&arr[Size]);
    selectionSort(arr, Size);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, Size);

    return 0;
}
