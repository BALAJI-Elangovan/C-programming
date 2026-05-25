#include<stdio.h>
struct point
{
    int x,y;
};
struct rectangle
{
    struct point upper_left;
    struct point lower_right;
};

int area(struct rectangle r)
{
    int length = r.lower_right.x - r.upper_left.x;
    int breadth = r.upper_left.y - r.lower_right.y;
    return length * breadth;
}
int main()
{
    struct rectangle r;
    r.upper_left.x = 10;
    r.upper_left.y = 20;
    r.lower_right.x = 20;
    r.lower_right.y = 10;
    printf("%d",area(r));
}