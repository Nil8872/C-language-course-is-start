# include<stdio.h>

int factorial(int n);


int main(){
    int num;
    printf("Enter the number you want to calculate factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is : %d",num, factorial(num));
    return 0;
}


int factorial(int n){
    
    // if(n==0 || n==1){
    //     printf("fuction call if statement\n");
    //     return 1;
    // }
    if(0){
        
    }
    else {
        printf("Function call\n of factorial(%d)",n);
        // printf("factorial(%d) is call\n",n);
        // printf("%d * ",n);
        int f= factorial(n-1) *n;
        return f;
    }
}