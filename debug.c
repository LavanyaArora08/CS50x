// Become familiar wih C syntax
// Learn to debug buggy code
#include<stdio.h>
#include <cs50.h>

int main(void)
{
    string name,location;
    // Ask for your name and where live
    name = get_string("What is your name? ");
    location = get_string("Where do you live? \n");

    // Say hello
    printf("Hello, %s, from %s!", name, location);
}