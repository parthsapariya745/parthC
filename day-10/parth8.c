#include<stdio.h>

int main(){
    int new = 1;

    for (int raw = 1; raw <= 5; raw++)
    {
        for (int col = raw; col >= 1; col--)
        {
            printf("%d ",new);
            new++;
        }
        printf("\n");
    }
}