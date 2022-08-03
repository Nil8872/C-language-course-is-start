#include <stdio.h>

int OccurenceCal(char ch, char *st)
{
    int count = 0;
    
    char *ptr = st;
    while (*ptr!= '\0')
    {
        if (*ptr == ch)
        {
            count++;
        }
        printf("%c",*ptr);
        ptr++;
    }
    // printf("\n");
    return count;
}

int main()
{
    char st[50];
    char ch;
    printf("Enter String Here : \n");
    gets(st);
    printf("Enter character you want to calculate occurance : \n");
    scanf("%c", &ch);

    int a = OccurenceCal(ch, st);
    printf("character \'%c\' occurence in string is %d",ch, a);
    return 0;
}