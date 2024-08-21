#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("enter the first value = ");
    scanf("%d", &a);

    printf("enter the second value = ");
    scanf("%d", &b);

    printf("enter the third value = ");
    scanf("%d", &c);

    printf("enter the fourth value = ");
    scanf("%d", &d);

    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    printf("a value is maximum");
                }
                else
                {
                    printf("d value is maximum");
                }
            }

            else
            {
                if (c > d)
                {
                    printf("c value is maximum");
                }
                else
                {
                    printf("d value is maximum");
                }
            }
        }
        
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    printf("b value is maximum");
                }
                else
                {
                    printf("d value is maximum");
                }
            }

            else
            {
                if (c > d)
                {
                    printf("c value is maximum");
                }
                else
                {
                    printf("d value is maximum");
                }
            }
        }
    }

    else{
        printf("This value are same");
    }
}