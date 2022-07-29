# include<stdio.h>

int main(){
    int num=100;
    
    printf("Enter the number for check that is divisible by 97 or not\n");
    scanf("%d", &num);
    if(num%97==0){
        printf("Given Number is Divisible by 97.");
    }
    else{
        
        printf("Given Number is Not Divisible by 97.");
    }
    return 0;
}