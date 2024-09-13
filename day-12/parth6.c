#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 5; raw++)
    {
        for (int col = 1; col <= raw; col++)
        {
            printf("%d ",col);
        }

        for (int space = raw; space <= 4; space++)
        {
            printf("    ");
        }
        

        for (int col = raw; col >= 1; col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}