# include<stdio.h>

int main(){
    int marks[4];
    int * ptr;
    ptr = &marks[0];

    for(int i = 0; i<4; i++){
        printf("Enter marks of student %d : ",i+1);
        scanf("%d", ptr);
        ptr++;
    }
    // ptr = marks;
    for(int i = 0; i<4; i++){
        // printf(" marks of student %d is: %d \n",i+1,*ptr);
        printf(" marks of student %d is: %d \n",i+1,marks[i]);
    
        ptr++;
    }
    return 0;
}