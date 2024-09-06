#include <stdio.h>

int main() {
    int user,a = 0,b = 1,c;

    printf("enter the any number : ");
    scanf("%d", &user);

    printf("%d\n%d\n",a,b);

    for (int start = 2; start < user; start++) 
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}