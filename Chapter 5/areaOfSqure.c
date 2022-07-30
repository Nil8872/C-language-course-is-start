# include<stdio.h>
# include<math.h>
float area(float side);


int main(){
    float a = area(5.5);
    printf("Area of squre is: %0.2f", a);
    return 0;
}


float area(float side){
float a;
a = pow(side, side);
return a;
}