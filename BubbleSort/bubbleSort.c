/*
 * Bubble Sort : Bubble Sort is based on the idea of repeatedly comparing pairs of adjacent elements
 * and then switching their positions if they exist in the wrong order.
 */

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int size)
{
    int i, j;
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main()
{
    int arr1[] = {5, 10, 3, 2, 15, 7, 18, 1, 5};
    int arr2[] = {1, 2, 3, 10, 0, -1, 7, -8};
    int sizeArr1 = sizeof(arr1)/sizeof(int);
    int sizeArr2 = sizeof(arr2)/sizeof(int);
    printf("====================================\n");
    printf("Before Sorting Array1:\n");
    for(int i=0; i<sizeArr1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    //Calling bubble sort function
    bubbleSort(arr1, sizeArr1);
    
    printf("After Sorting Array1:\n");
    for(int i=0; i<sizeArr1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n\n");


    printf("====================================\n");
    printf("Before Sorting Array2:\n");
    for(int i=0; i<sizeArr2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    //Calling bubble sort function
    bubbleSort(arr2, sizeArr2);
    
    printf("After Sorting Array2:\n");
    for(int i=0; i<sizeArr2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
}
   
