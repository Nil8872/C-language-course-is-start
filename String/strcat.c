# include<stdio.h>
# include<string.h>

int main(){
    char st1[] = "Nilesh";
    char st2[] = "Sariya";
    strcat(st1,st2);
    strcat(st2,st1);
    printf("Now st1 is : %s\n", st1);
    printf("Now st2 is : %s\n", st2);
    return 0;
}