#include <stdio.h>
#include <stdlib.h>

#define SIZE 9 


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int selectionSort(int arr[], int n)
{
    int i, j, min_idx, totalSwaps = 0;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
            totalSwaps++;
        }
    }
    return totalSwaps;
}


int bubbleSort(int arr[], int n)
{
    printf("\nUsing Bubble sort\n\n");
    int i, j, totalSwaps = 0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                totalSwaps++;
            }
        }
    }
    return totalSwaps;
}



int main()
{
    int arr1[SIZE] = {97,16,45,63,13,22,7,58,72};
    int arr2[SIZE] = {90,80,70,60,50,40,30,20,10};
    int barr1[SIZE] = {97,16,45,63,13,22,7,58,72};
    int barr2[SIZE] = {90,80,70,60,50,40,30,20,10};
    
    printf("Array1 before sorting: \n");
    printArray(arr1, SIZE);
    int swapCount1 = selectionSort(arr1, SIZE);
    printf("Array1 Selection Sort: \n");
    printArray(arr1, SIZE);
    printf("Swaps for Selection Sort on Array 1: %d\n\n", swapCount1);

    printf("Array2 before sorting: \n");
    printArray(arr2, SIZE);
    int swapCount2 = selectionSort(arr2, SIZE);
    printf("Array2 Selection Sort: \n");
    printArray(arr2, SIZE);
    printf("Swaps for Selection Sort on Array 2: %d\n\n", swapCount2);
    
    printf("Array1 before sorting: \n");
    printArray(barr1, SIZE);
    int bswapCount1 = bubbleSort(barr1, SIZE);
    printf("Array1 Bubble Sort: \n");
    printArray(barr1, SIZE); 
    printf("Swaps for Bubble Sort on Array 1: %d\n\n", bswapCount1);  

    printf("Array2 before sorting: \n");
    printArray(barr2, SIZE);
    int bswapCount2 = bubbleSort(barr2, SIZE);
    printf("Array2 Bubble Sort: \n");
    printArray(barr2, SIZE);
    printf("Swaps for Bubble Sort on Array 2: %d\n\n", bswapCount2);      
    
    return 0;
}

