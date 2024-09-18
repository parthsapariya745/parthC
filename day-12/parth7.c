int main() {
    int raw, col;

    for(raw=1;raw<=5;raw++)
    {
        for(col=1 ; col<=5;col++){
            if(raw==2 && (col>1 && col<5) || raw==4 && col>1 || raw==5 && col>1 )
        {
            printf("  ");
        }
        else 
        {
            printf(" *");
        }
        }

        printf("\n");
       
    }

}