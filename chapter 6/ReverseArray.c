#include <stdio.h>

int main()
{//   int n;
    int arr[5];

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element of arrays : ", i + 1);
        scanf("%d", &arr[i]);
        ptr++;
    }
    printf("Your Reverse Array is : ");
    printf("{");
    for (int i = 5; i > 0; i--)
    {
        if (i==1)
        {
            ptr--;
            printf("%d", *ptr);
        }
        else
        {

            ptr--;
            printf("%d, ", *ptr);
        }
    }
    printf("}");
    return 0;
}