#include<stdio.h>

int main(){
    int user,sum = 0,lar,min;

    printf("enter the value: ");
    scanf("%d",&user);

    int box[user];
    for (int i = 0; i < user; i++)
    {
        printf("enter the %d element value: ",user);
        scanf("%d",&box[i]);
    }

    for (int i = 0; i < user; i++)
    {
        sum += box[i];
    }
    printf("sum: %d\n",sum);

    lar = box[0];
    for (int i = 0; i < user; i++)
    {
        if (box[i] > lar)
        {
            lar = box[i];
        }
    }
    printf("largest value: %d\n",lar);

    min = box[0];
    for (int i = 0; i < user; i++)
    {
        if (box[i] < min)
        {
            min = box[i];
        }
    }
    printf("minimum value: %d",min);
}