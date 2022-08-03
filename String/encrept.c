#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;

    while (*ptr != '\0')
    {
        *ptr = *ptr + 2;
        ptr++;
    }
}

void decrypt(char *c2)
{
    char *ptr = c2;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 2;
        ptr++;
    }
}
int main()
{

    char c[] = "Nilesh";
    char c2[] = "Pknguj";
    decrypt(c2);
    printf("%s\n",c2);

    encrypt(c);
    printf("%s\n", c);

    return 0;
}