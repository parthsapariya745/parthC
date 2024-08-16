#include<stdio.h>

int main(){
    int Fa,Sa,Ta;

    printf("First Angle: ");
    scanf("%d",&Fa);

    printf("second Angle: ");
    scanf("%d",&Sa);

    Ta = 180 - (Fa + Sa);
    printf("Third Angle: %d",Ta);
}