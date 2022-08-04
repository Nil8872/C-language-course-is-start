# include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num1;
    int num2;
    ptr = fopen("Nilesh.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);

    printf("The number is: %d\n", num);
    printf("The number is: %d\n", num1);
    printf("The number is: %d\n", num2);
    return 0;
}