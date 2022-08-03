#include <stdio.h>
#include <string.h>

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
    st[i-1] = '\0';
    printf("%s", st);

    char st1[] = "Nilesh";
    printf("%s\n", st1);

    printf("value of cmp is %d", strcmp(st1,st));
    return 0;
}