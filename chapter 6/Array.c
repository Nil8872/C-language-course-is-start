#include <stdio.h>

int main()
{
    // int marks1, marks2, marks3, marks4;
    // marks1 = 23;
    // marks2 = 34;
    // marks4 = 100;
    // marks3 = 89;
    // printf("marks of student 1 is : %d\n",marks1);
    // printf("marks of student 2 is : %d\n",marks2);
    // printf("marks of student 3 is : %d\n",marks3);
    // printf("marks of student 4 is : %d\n",marks4);

    // int marks[4];
    // marks[1] = 44;
    // marks[2] = 48;
    // marks[3] = 4;
    // marks[0] = 894;
    // printf("marks of student 1 is %d\n", marks[0]);
    // printf("marks of student 2 is %d\n", marks[1]);
    // printf("marks of student 3 is %d\n", marks[2]);
    // printf("marks of student 4 is %d\n", marks[3]);

    // using for loop to input from user and print element

    int arr[4];
    // printf("size of arr is %d",sizeof(arr));
    for (int i = 0; i <4; i++)
    {
        printf("Enter The marks of student %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student %d is %d\n ", i + 1, arr[i]);
        
    }
    // printf("marks of student 5 :%d", arr[4]);

    return 0;
}