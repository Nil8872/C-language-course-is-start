# include<stdio.h>

struct PointerInStucture
{
    int id;
    float salary;
    char name[30];
};


int main(){

    struct PointerInStucture p1;
    struct PointerInStucture *ptr;
    ptr = &p1;

    // (*ptr).id = 100;
    ptr->id = 100;
    ptr->salary = 55.23;

    printf("Employee id is : %d\n", ptr->id);
    printf("Employee salary is  : %f\n", ptr->salary);
     
    
    
    return 0;
}