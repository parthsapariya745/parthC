#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 2; raw++)
    {   
        for (int space = raw; space >= 2; space--)
        {
            printf("*       *\n");
        }
        for (int col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int raw = 1; raw <= 2; raw++)
    {   
        for (int space = raw; space >= 2; space--)
        {
            printf("*\n");
            printf("*\n");
        }
    }
}