#include<stdio.h>
    int main(){

    int eng,sci,maths;
    float avg;
    printf("Enter the english marks : ");
    scanf("%d",&eng);

    printf("Enter the science marks : ");
    scanf("%d",&sci);

    printf("Enter the maths marks : ");
    scanf("%d",&maths);

    if (eng < 0 || sci < 0 || maths < 0 || eng > 100 || sci > 100 || maths > 100)
    {
    printf("Invalid marks");
    }

    else{
    avg = (eng + sci + maths)/3;
    printf("average marks is = %f",avg);
    }
}