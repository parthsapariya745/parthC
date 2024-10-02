#include<stdio.h>

int main(){
    int user;

    printf("enter any number: ");
    scanf("%d",&user);

    if (user %2 != 0)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("The number is even.");
    }
}