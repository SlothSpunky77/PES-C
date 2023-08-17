#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() 
{
    int n, i;
    printf("Enter the number of elements you want to sort: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Before sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    selectionSort(arr, n);
    printf("After sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}