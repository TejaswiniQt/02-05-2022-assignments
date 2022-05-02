/*Write a C program to find maximum and minimum element in an array. */

#include<stdio.h>

int max_min(int arr[],int size);
void scan_array(int *arr, int size);

int main()
{
        int size;
        printf("Enter array size: ");
        scanf("%d", &size);
        int arr[size];
        scan_array(arr, size);
        max_min(arr, size);
        printf("Maximum is %d\n", arr[size-1]);
        printf("Minimum is %d\n", arr[0]);
}


int max_min(int arr[],int size)
{
        int i,j,temp;
        for (i=0; i<size; i++)
        {
                for (j=i+1; j<size; j++)
                {
                        if (arr[i] > arr[j])
                        {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }
}


void scan_array(int *arr, int size)
{
        printf("Enter array elements: ");
        for(int i=0;i<size;i++)
        {
                scanf("%d", &arr[i]);
        }
}