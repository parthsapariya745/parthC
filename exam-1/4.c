#include<stdio.h>

int main(){

    int a,b;

    printf("press 1 for English.\n ");
    printf("press 2 for Hindi.\n ");
    printf("press 3 for Gujarati \n");

    printf("enter your no : ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("press 1 for internet recharge\n");
        printf("press 2 for top-up recharge\n");
        printf("press 3 for special recharge\n");
        break;
    case 2:
        printf("internet recharge k liye 1 dabaye\n");
        printf("top-up recharge k liye 2 dabaye\n");
        printf("special recharge k liye 3 dabaye\n");
        break;
    case 3:
        printf("internet recharge mate 1 dabao\n");
        printf("top-up recharge mate 2 dabao\n");
        printf("special recharge mate 3 dabao\n");
        break;
    
    default:
        break;
    }

    printf("enter your no : ");
    scanf("%d",&b);

    switch (b)
    {
    case 1:
        printf("you have successfully done a internet recharge");
        break;
    case 2:
        printf("you have successfully done a top-up recharge");
        break;
    case 3:
        printf("you have successfully done a special recharge");
        break;
    
    default:
        break;
    }
}