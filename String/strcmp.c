# include<stdio.h>
# include<string.h>

int main(){
    char st1[] = "Nilesh";
    char st2[] = "Nilesh";

    int a = strcmp(st1, st2);
    printf("The value of a is : %d", a);
    return 0;
}