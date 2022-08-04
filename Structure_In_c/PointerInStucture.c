# include<stdio.h>
# include<string.h>

typedef struct PointerInStucture
{
    int id;
    float salary;
    char name[30];
} p;


int main(){

    p p1;
    p p2;
    p *ptr2;
    ptr2 = &p2;


    p *ptr;
    ptr = &p1;

    // (*ptr).id = 100;
    ptr2->id = 200;
    ptr2->salary = 99.99;
    strcpy(ptr2->name, "Nilesh");
    

    ptr->id = 100;
    ptr->salary = 55.23;
    strcpy(ptr->name, "Nilesh Sariya");
    // ptr->name = "Nilesh Sariya";


    printf("Employee id is : %d\n", ptr->id);
    printf("Employee salary is  : %f\n", ptr->salary);
    printf("Employee name is  : %s\n", ptr->name);
    printf("\n");

    printf("Employee id is : %d\n", ptr2->id);
    printf("Employee salary is  : %f\n", ptr2->salary);
    printf("Employee name is  : %s\n", ptr2->name);
     
    
    
    return 0;
}