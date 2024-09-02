#include<stdio.h>

int main(){
    int user,end = 1;

    printf("Enter any number : ");
    scanf("%d",&user);

    while (end <= user)
    {
        if (user % 2 == 1)
        {
            printf("%d\n",user);
        }
           user--;
    }
}