#include <stdio.h>
#include <stdbool.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int size_arr)
{
    bool checkswap = false;
    int last_unsort_index = size_arr - 1;

    do
    {
        checkswap=false;
        for (int i = 0; i < last_unsort_index ; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                checkswap = true;
                swap(&arr[i], &arr[i + 1]);
            }
        }
        last_unsort_index--;
    }
    while(checkswap);
}
int main()
{
  int arr[] = {5, 5, 4, 3, 4, 2, 1};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size_arr);
    printf("Sorted array: \n");
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ", arr[i]);
    }
}
