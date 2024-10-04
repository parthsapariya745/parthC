#include<stdio.h>

int main(){
    int user,sum = 1;

    printf("Enter a number: ");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {
        sum *= i;
    }
    printf("Factorial of %d is: %d",user,sum);
}