#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of how many element :");
    scanf("%d", &n);
    int arr[n];

    int *ptr = arr;

    for (int i = 0; i < (n); i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
        ptr++;
    }
    int *ptr1 = arr;
    printf("Your Array is : ");

    printf("{");
    for (int i = 0; i <n; i++){
        if(i==(n-1)){
        printf("%d",*ptr1);
        ptr1++;

        }
        else{

        printf("%d, ",*ptr1);
        ptr1++;
        }
    }
    printf("}\n");

    printf("Your Reverse Array is : ");
    printf("{");
    for (int i = n; i > 0; i--)
    {
        if (i == 1)
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