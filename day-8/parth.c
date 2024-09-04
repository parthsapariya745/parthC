#include<stdio.h>

int main(){
    int user,sum = 0;

    printf("enter the any number : ");
    scanf("%d",&user);

    for (int a = 1; a <= user; a++)
    {
        sum += a;
    }
    printf("the sum of all number : %d",sum);
}