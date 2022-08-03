# include<stdio.h>

int main(){
    char ch[50];
    char *ptr = ch;
    printf("Enter Your name: \n");
    // scanf("%s", &ch);
    gets(ch);

    printf("Your name is: ");
    puts(ch);
    puts(ch);

    

    return 0;
}