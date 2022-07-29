# include<stdio.h>

void display(); //--> fuction prototype
void displayGoodmorning(); //--> fuction prototype
void displayGoodEvening(); //--> fuction prototype
void displayGoodnight(); //--> fuction prototype

int main(){
    display(); //--> fuction call
    // displayGoodmorning();
    // displayGoodEvening();
    // displayGoodnight();
    return 0;
}

void display(){
    printf("Hello, Good morning How are you!\n");
    displayGoodmorning();
}
void displayGoodmorning(){
    printf("Hello, Good Morning How are you!\n");
    displayGoodEvening();
}
void displayGoodEvening(){
    printf("Hello, Good Evening How are you!\n");
    displayGoodnight();
}
void displayGoodnight(){
    printf("Hello, Good Night How are you!\n");
}