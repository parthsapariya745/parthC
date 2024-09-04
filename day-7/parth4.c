#include <stdio.h>

int main() {
    int user, first = 0, second = 1, third;

    printf("enter the any number : ");
    scanf("%d", &user);

    printf("%d\n%d\n", first, second);

    for (int start = 2; start < user; start++) 
    {
        third = first + second;
        printf("%d\n", third);
        first = second;
        second = third;
    }
}