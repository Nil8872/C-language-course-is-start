# include<stdio.h>

int main(){
     char ch[] = "Nilesh Sariya";
    
    char *ptr = ch;

 
    int count=0;

    while(*ptr!='\0'){
        // printf("%c",*ptr);
        count++;
        ptr++;
    }

    printf("\nString length is %d",count);
    return 0;
}