#include<stdio.h>

int main(){
    int user,sum = 0;

    printf("Enter a number: ");
    scanf("%d",&user);

    for (int i = 1; i <= user; i++)
    {   
        sum += i;
    }
    printf("Sum of digits: %d",sum);
}