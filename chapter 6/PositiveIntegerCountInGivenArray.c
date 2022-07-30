#include <stdio.h>

int countPositiveInt(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[10] = {1, -1, 2, -2, 3, -3, -4, 4, 5, -5};
    int arr1[6] = {1,2,3,-1,-2,4}; 
    printf("Positive Integer in this array are : %d\n",countPositiveInt(arr, 10));
    printf("Positive Integer in this array are : %d\n",countPositiveInt(arr1, 6));

    return 0;
}