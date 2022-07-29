# include<stdio.h>

int main(){

    int length, breadth;

    // using hard code to calculate area of Rectangle 


    // length = 15; 
    //  breadth = 5;

    // getting input from user to calculate area of Rectangle

    printf("Enter value of length of rectangle \n");
    scanf("%d", &length);

    printf("Enter value of breadth of rectangle \n");
    scanf("%d", &breadth);
    

    int area = length * breadth;

    // side = 15;
    printf("The area of Rectangle is %d", area);
    
    


    return 0;

}