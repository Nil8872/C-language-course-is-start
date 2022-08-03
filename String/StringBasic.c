# include<stdio.h>

int main(){
    // char ch[] = {'N', 'i', 'l','e', 's', 'h', '\0'};
    char ch[] = "Nilesh Sariya";
    
    char *ptr = ch;

    // for(int i=0; i<)

    

    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }

    // printf("%s",ch);

    return 0;
}