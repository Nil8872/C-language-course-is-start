# include<stdio.h>

int main(){
    float maths,physics, chemistry;
    printf("Enter your maths marks :\n");
    scanf("%f", &maths);
    printf("Enter your physics marks :\n");
    scanf("%f", &physics);
    printf("Enter your chamistry marks :\n");
    scanf("%f", &chemistry);
    float avg = (maths + physics+ chemistry)/3;
    // printf("%.2f",avg);

    if(avg<40 || (maths<33 || physics<33 || chemistry<33)) {
        printf("You are Fail in this exam\n");
    }
    else{
        printf("Congrats, You are pass in this exam\n");
        
    }
        printf("You are average marks is : %.2f", avg);
    return 0;
}