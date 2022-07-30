#include <stdio.h>

int main()
{
    // int arr[2][3]= {{1,2,4}, {2,3,5}};
    // printf("arr[0][0] is : %d \n", arr[0][0]);
    // printf("arr[1][0] is: %d \n", arr[1][0]);
    // printf("arr[1][2] is: %d\n", arr[1][1]);
    // return 0;

    int student_id = 3;
    int student_subject = 5;
    int marks[3][5];

    for (int i = 0; i < student_id; i++)
    {
        for (int j = 0; j < student_subject; j++)
        {
            printf("Enter student %d subject %d mark: \n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < student_id; i++)
    {
        for (int j = 0; j < student_subject; j++)
        {
            printf("Enter student %d subject %d marks is: %d\n", i+1, j+1, marks[i][j]);
            
        }
    }
}