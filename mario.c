#include<cs50.>
#include<stdio.h>

int main(void)

{

    for (int i = 0 ;i < 4; i++)

    {
        printf("?");
    }

    printf("\n");
}

{
    constant int n = get_int("Size Or Dimension:");
    for ( int i =0; i<n; i++)

    {
       for ( int j =0; j<n; j++)
       {
        printf("#");
       }

       printf("\n");

    } 
}