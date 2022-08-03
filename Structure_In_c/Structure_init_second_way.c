# include<stdio.h>

struct employee {
    int id;
    float salary;
    char name[30];   
};

int main(){

    struct employee Nilesh = {100, 85.55, "Nilesh Sariya"};
    printf("Employee id is : %d\n", Nilesh.id); 
    printf("Employee salary is  is : %f\n", Nilesh.salary); 
    printf("Employee name is : %s\n", Nilesh.name); 

    return 0;
}