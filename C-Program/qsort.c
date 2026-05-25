#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a, const void *b)
{
    return (*(int*)a- *(int*)b);
}
int main()
{
    int *arr = (int*)malloc(sizeof(int)*5);
    int temp[] = {5,4,3,2,1};
    memcpy(arr,temp,sizeof(temp));
    qsort(arr,5,sizeof(int),cmp);
    for(int i =0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

}