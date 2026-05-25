#include<stdio.h>
int reversed(int num)
{
    int reverse = 0;
    while(num)
    {
        reverse = reverse*10 +(num%10);
        num /=10;
    }
    int main()
    {
        int num = 12345;
        printf("%d\n",reversed(num));
        return 0;
    }
}