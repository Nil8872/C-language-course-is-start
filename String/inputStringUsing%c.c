#include <stdio.h>

int main()
{
    char ch;
    char st[50];
    // printf("Enter character : ");
    // scanf("%c", &ch);
    int i = 0;
    while (ch != '\n')
    {
        fflush(stdin);
        printf("Enter character : ");
        scanf("%c", &ch);
        st[i] = ch;
        i++;
        // printf("%c", ch);
    }
    st[i] = '\0';
    printf("%s", st);
    return 0;
}