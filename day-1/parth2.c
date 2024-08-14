#include<stdio.h>

int main(){
    int x,y,Ans;
    printf("x = ");
    scanf("%d",&x);

    printf("y = ");
    scanf("%d",&y);

    Ans = (x + y)*(x + y)*(x + y);
    printf("Ans = %d",Ans);
}