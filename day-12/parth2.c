#include<stdio.h>

int main(){
    int new = 11;
    
    for (int raw = 1; raw <= 4; raw++)
    {
        for (int col = raw; col >= 1; col--)
        {
            printf("%d ",new);
            new++;
        }
        printf("\n");
    }
}