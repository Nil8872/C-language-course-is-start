#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b : ");
    scanf("%d", &b);

    printf("Enter number c : ");
    scanf("%d", &c);

    printf("Enter number d : ");
    scanf("%d", &d);

    if (a >= b)
    {
        if (a >= c)
        {
            if (a > d)
            {
                printf("gretest element is %d\n", a);
            }
            else if (d > a)
            {
                printf("gretest element is %d\n", d);
            }
        }
        else if (c >= a)
        {
            if (c > d)
            {
                printf("gretest element is %d\n", c);
            }
            else if (d > c)
            {
                printf("gretest element is %d\n", d);
            }
        }
    }
    else if (b >= a)
    {
        if (b >= c)
        {
            if (b > d)
            {
                printf("gretest element is %d\n", b);
            }
            else if (d > b)
            {
                printf("gretest element is %d\n", b);
            }
        }
        else if (c >= b)
        {
            if (c > d)
            {
                printf("gretest element is %d\n", c);
            }
            else if (d > c)
            {
                printf("gretest element is %d\n", d);
            }
        }
    }
    
    
    
    if (a == b)
    {
        printf("element a and b is same! a=b=%d\n", a);
    }
    else if (a == c)
    {
        printf("element a and c is same! a=c=%d\n", a);
    }
    else if (a == d)
    {
        printf("element a and d is same! a=d=%d\n", a);
    }
    else if (b == c)
    {
        printf("element b and c is same! b=c=%d\n", b);
    }
    else if (b == d)
    {
        printf("element b and d is same! b=d=%d\n", b);
    }
    else if (c == d)
    {
        printf("element c and d is same! c=d=%d\n", c);
    }

    if (a == b == c)
    {
        printf("a,b and c is same a=b=c=%d", a);
    }
    return 0;
}
