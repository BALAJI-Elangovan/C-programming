#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *text = "Hello all";
    char c = 'l';
    char *ptr = strrchr(text,c);
    if(ptr)
    {
        printf("the character : %c is in %d position",c,ptr-text);
    }
    else
    {
        printf("No character found");
    }
}