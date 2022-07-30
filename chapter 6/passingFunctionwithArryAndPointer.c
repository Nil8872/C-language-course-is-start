# include<stdio.h>
void printMarks(int* ptr, int n);
int main(){
    int marks[]={1,2,3,4,5,6,7};
    // int *ptr =marks;
    printMarks(marks, 7);
    return 0;
}

// void printMarks(int* ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("marks of student %d is %d\n",i+1, *ptr);
//         ptr++;
//     }
void printMarks(int ptr[], int n){
        ptr[2] = 34;
        ptr[6] = 10;

    for(int i=0; i<n; i++){
        printf("marks of student %d is %d\n",i+1, ptr[i]);
        // printf("marks of student %d is %d\n",i+1, *ptr);
        // ptr++;
    }
}