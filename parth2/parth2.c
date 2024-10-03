#include<stdio.h>

int main(){
    int user;

    printf("Enter the number of rows: ");
    scanf("%d",&user);

    for (int row = user; row >= 1; row--)
    {
        for (int col = user; col >= row; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}