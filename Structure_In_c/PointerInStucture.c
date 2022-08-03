# include<stdio.h>

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
    ptr->id = 100;
    ptr->salary = 55.23;
    ptr2->salary = 99.99;

    printf("Employee id is : %d\n", ptr->id);
    printf("Employee salary is  : %f\n", ptr->salary);
    printf("Employee id is : %d\n", ptr2->id);
    printf("Employee salary is  : %f\n", ptr2->salary);
     
    
    
    return 0;
}