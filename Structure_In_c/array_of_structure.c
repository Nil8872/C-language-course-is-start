#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    int id;
    float salary;
};
void printInformationEmp(struct employee e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee %d id : %d.\n", i + 1, e[i].id);
        printf("Enter employee %d salary : %.2f \n", i + 1,e[i].salary);
        printf("Enter employee %d name : %s\n", i + 1, e[i].name);
        // puts(e[i].name);
        printf("*****************************************************\n");
    }
}
void inputOfEmployeeInformation(struct employee e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee %d id : ", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter employee %d salary : ", i + 1);
        scanf("%f", &e[i].salary);
        fflush(stdin);
        printf("Enter employee %d name : ", i + 1);
        gets(e[i].name);
    }
}

int main()
{
    int n;
    printf("How many Employee informtion you want to store here : ");
    scanf("%d", &n);
    struct employee e[n];

    inputOfEmployeeInformation(e, n);
    printInformationEmp(e, n);
    return 0;
}