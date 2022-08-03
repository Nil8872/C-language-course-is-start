#include <stdio.h>

void givenCharPresentOrNot(char ch, char *st)
{
    int count = 0;
    
    char *ptr = st;
    while (*ptr!= '\0')
    {
        if (*ptr == ch)
        {
            count++;
        }
        
        ptr++;
    }
    if(count>0){
        printf("Givent Character is present in String.\n");
    }
    else{
        printf("Givent Character is present Not in String.\n");

    }

    
 }

int main()
{
    char st[50];
    char ch;
    printf("Enter String Here : \n");
    gets(st);
    printf("Enter character you want to calculate occurance : \n");
    scanf("%c", &ch);

    givenCharPresentOrNot(ch, st);

    return 0;
}