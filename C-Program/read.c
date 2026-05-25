#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char s[100];
    fgets(s,100,file);
    printf("%s",s);
    fclose(file);
    return 0;
}