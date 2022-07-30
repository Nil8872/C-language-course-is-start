# include<stdio.h>

int sum(int a, int b);



int main(){
    int x = 5, y= 10;
    printf("Before calling function value of X is %d and Y is %d \n", x, y);
    printf("The sum of a and b is: %d\n", sum(x, y));
    printf("After calling function value of X is %d and Y is %d \n", x, y);

    return 0;
}
int sum(int a, int b){
    a= 10;
    b=50;
    return a+b;
}
