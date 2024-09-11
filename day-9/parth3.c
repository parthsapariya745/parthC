#include<stdio.h>

int main(){
    int user,first,last,sum;

    printf("enter any value : ");
    scanf("%d",&user);

    last = user % 10;

    while (user >= 10)
    {
        user = user / 10;
    }
    first = user;

    sum = first + last;

    printf("%d\n",sum);
}