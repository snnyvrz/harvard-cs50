#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* using get_string function from cs50 library */
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
