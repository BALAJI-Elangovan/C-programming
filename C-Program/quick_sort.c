#include<stdio.h>
#include<string.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[],int l,int h)
{
    int i =l;
    int pivote = a[l];
    int j = h;
   do
   {
    do{i++;}while(a[i]<=pivote);
    do{j--;}while(a[j]>pivote);
    if(i<j)swap(&a[i],&a[j]);
   }while(i<j);
   swap(&a[l],&a[j]);
   return j;
}
void quicksort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        j= partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
    
}
int main()
{
    int arr[] = {34,56,12,78,1,9,23,74,15};
    int h= sizeof(arr)/sizeof(arr[0]);
    int l =0;
    quicksort(arr,l,h);
    for(int i =0;i<h;i++)
    {
        printf("%d ",arr[i]);
    }
}