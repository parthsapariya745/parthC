#include<stdio.h>

int main(){
    int start = 1, user;

    printf("Ente any number : ");
    scanf("%d",&user);

    while (start <= user)
    {
        printf("%d\n",start);
        start++;
    }
}