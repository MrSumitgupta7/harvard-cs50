#include <cs50.h>
#include <stdio.h>

int main (void)

{
    string name = get_string("What is yout name?");
    int age = get_int("What is your age");
    string number = get_string("what is your ohone number");


    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("number: %s\n", number);



}