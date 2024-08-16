#include<stdio.h>

int main(){
    float C,F;
    
    printf("The temperature in Celsius: ");
    scanf("%f",&C);

    F = (1.8 * C)+32;
    printf("The temperature in Fahrenheit: %.1f",F);
}