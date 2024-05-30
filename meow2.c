#include<stdio.h>

void meow (int);

int main(void)
{
  meow(300);
}

void meow (int n)
{
    for ( int i =0; i < 3; i++)
    printf("meow\n");
}