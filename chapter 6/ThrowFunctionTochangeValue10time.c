# include<stdio.h>
void changeValue(int* a);
int main(){
    int x = 5;
    printf("Before change value by calling fuction value of x is %d\n", x);
    changeValue(&x);
    printf("After change value by calling fuction value of x is %d\n", x);

    return 0;
}

void changeValue(int* a){
    *a = (*a)*10;
}

