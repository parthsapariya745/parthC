#include<stdio.h>

int main(){
    int start = 2,user;

    printf("enter the even number : ");
    scanf("%d",&user);

    do
    {
        if (start % 2 == 0)
        {
            printf("%d\t",start);
        }
        start++;
    } while (start <= user);
}