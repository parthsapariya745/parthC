#include<stdio.h>

int main(){
    for (int raw = 1; raw <= 5; raw++)
    {
        for (int col = raw; col <= 5; col++)
        {
            printf("%d ",raw);
        }
        printf("\n");
    }
}