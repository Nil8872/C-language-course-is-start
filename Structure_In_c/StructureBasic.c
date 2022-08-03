# include<stdio.h>
# include<string.h>

struct employee{
char name[50];
int id;
float salary;

};
void printInformationEmp(struct employee em){
    printf("Employee name is : %s\n", em.name);
    printf("Employee id is : %d\n", em.id);
    printf("Employee salary is : %f\n", em.salary);
    printf("\n");
}


int main(){
    struct employee e;
    e.id= 1;
    strcpy(e.name,"Nilesh");
    e.salary = 88.88;
    printInformationEmp(e);

    struct employee e1;
    strcpy(e1.name,"Vijay");
    e1.salary = 50.88;
    e1.id= 2;
    printInformationEmp(e1);
    struct employee e2;
    strcpy(e2.name,"Umesh");
    e2.salary = 20.50;
    e2.id= 3;
    printInformationEmp(e2);
    return 0;
}