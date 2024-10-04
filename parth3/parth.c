#include<stdio.h>

int main(){
    int user,sum = 0;

    printf("Enter a number: ");
    scanf("%d",&user);

    for (int i = user; i > 0; i /= 10)
    {
        sum += i %10;
    }
    printf("Sum of digits: %d",sum);
}