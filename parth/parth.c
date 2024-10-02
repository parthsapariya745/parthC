#include<stdio.h>

int main(){
    int user,value1,value2;

    printf("press 1 Addition\n");
    printf("press 2 Subtraction\n");
    printf("press 3 Multiplication\n");
    printf("press 4 Division\n\n");

    printf("enter any number: ");
    scanf("%d",&user);

    printf("enter any first value: ");
    scanf("%d",&value1);

    printf("enter any second value: ");
    scanf("%d",&value2);
    

    switch (user)
    {
    case 1:
        printf("Result: %d",value1 + value2);
        break;
    case 2:
        printf("Result: %d",value1 - value2);
        break;
    case 3:
        printf("Result: %d",value1 * value2);
        break;
    case 4:
        printf("Result: %.2f",(float)value1 / value2);
        break;
    default:
    printf("Invalid number => exit");
        break;
    }
}