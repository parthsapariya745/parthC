#include<stdio.h>

int main(){
    for (int raw = 5; raw >= 1; raw--)
    {   
        for (int space = raw; space <= 4; space++)
        {
            printf("  ");
        }
        
        for (int col = 1; col <= raw; col++)
        {
            if (col %2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}