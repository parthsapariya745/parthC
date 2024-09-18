#include<stdio.h>

 int main(){
    int raw,col;
    for (raw = 1; raw <= 5; raw++)
    {
        for (col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        // if (raw > 1 && raw < 5 || col <= 1 && raw > 4)
        // {
        //     printf("    ");
        // }
        // else
        // {
        //     printf("* ");
        // }
        printf("\n");
    }
}