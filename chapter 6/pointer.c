#include <stdio.h>

int main()
{
    int i = 23;
    int *j = &i;
    // printf("The value of i is: %d \n", i);
    // printf("The address of i is: %u \n", &i);
    // printf("The address of j is: %u \n", &j);

    // printf("The value of j is %d\n ", *(&j));
    // printf("The value of j is %d \n ", j);
    // printf("The value of i is %d \n", *(&i));
    // printf("The value of i is %d \n", *j);

    int **k = &j;
    // printf("The address of k is %u\n", k);
    // printf("The value of j is by k pointer is %d\n", *k);
    // printf("The value of i is by k pointer is %d\n", **k);

    int ***l = &k;
    printf("The address of l is %u\n", &l);
    printf("The value of l is %d\n", *(&l));
    printf("The address of k is %u\n", &k);
    printf("The value of k is %d\n", *(&k));
    printf("The Address of j is %u\n", &j);
    printf("The value of j is using l pointer is %d \n", ***(&l));
    printf("The value of j is %d\n", *(&j));

    printf("The value of i is %d\n",i);
    printf("The value of i using l pointer is %d \n", ****(&l));
    printf("The address of i is %u \n", &i);

    return 0;
}