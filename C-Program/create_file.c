#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w");
    char c[100] = "file is created succesfully";
    fprintf(file,"%s",c);
    fclose(file);
    return 0;
}