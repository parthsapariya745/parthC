#include<stdio.h>

int main(){
    char start = 'a';

    do
    {
        if (start % 4 == 1)

        {
            printf("%c\t",start);
        }
        start++;
    } while (start <= 'z');
}