#include<stdio.h>

int main(){
    int user,ans = 1;

    printf("enter the any number : ");
    scanf("%d",&user);

    for (int a = 1; a <= user; a++)
    {
        ans *= a;
    }
    printf("The factorial is: %d",ans);
}