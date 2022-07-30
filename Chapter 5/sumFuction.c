# include<stdio.h>
int sum(int a, int b);
int main(){
    int c = sum(4,5);
    printf("sum of 4 and 5 is %d",c);
    return 0;
}

int sum(int a,int b){
    int c;
    c= a+b;
    return c;
}