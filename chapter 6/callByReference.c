#include <stdio.h>

void swap(int* a, int* b);

int main()
{
    int a = 5, b = 10;
    printf("value of a=%d and b=%d is Before calling function\n ", a, b);

    swap(&a, &b);

    printf("value of a=%d and b=%d is Before calling function\n ", a, b);


    return 0;
}

void swap(int* a, int *b){
    int temp = *b;
    *b= *a;
    *a = temp;
}