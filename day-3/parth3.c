#include<stdio.h>

int main(){
    float maths,english,science,average;

    printf("enter the maths marks : ");
    scanf("%f",&maths);

    printf("enter the english marks : ");
    scanf("%f",&english);

    printf("enter the science marks : ");
    scanf("%f",&science);

    if (maths < 0 || english < 0 || science < 0 || maths > 100 || english > 100 || science > 100)
    {
        printf("invalid marks");
    }
    else{
        average = (maths + english + science)/3;
        printf("average marks : %f",average);
    }
}