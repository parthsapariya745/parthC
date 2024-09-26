#include<stdio.h>

int calc(){
    int user,value1,value2,ans;
    float ans2;
    printf("Press 1 for +\n");

    printf("Press 2 for -\n");

    printf("Press 3 for *\n");

    printf("Press 4 for /\n");
 
    printf("Press 5 for Module\n\n");

    printf("Enter your choice: ");
    scanf("%d",&user);

    if (user == 0 && user < 6)
    {
        printf("Enter the first number: ");
        scanf("%d",&value1);

        printf("Enter the second number: ");
        scanf("%d",&value2);
    }

    else{
        
    }

    switch (user)
    {
    case 1:
        ans = value1 + value2;
        printf("Addition of %d and %d is %d",value1,value2,ans);
        break;

    case 2:
        ans = value1 - value2;
        printf("subtraction of %d and %d is %d",value1,value2,ans);
        break;
    
    case 3:
        ans = value1 * value2;
        printf("multiplication of %d and %d is %d",value1,value2,ans);
        break;

    case 4:
        ans2 = (float)value1 / value2;
        printf("Divison of %d and %d is %.2f",value1,value2,ans2);
        break;

    case 5:
        ans = value1 % value2;
        printf("module of %d and %d is %d",value1,value2,ans);
        break;
    default:
    printf("invalid number for the exit");
        break;
    }
}

int main(){
    calc();
}