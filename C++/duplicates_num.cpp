#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void sorting(vector<int>&arr,int n)
{
    int flag=0;
    for(int i =0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag == 0)break;
    }

}
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<endl;
    vector<int>arr(n);
    cout<<"Enter the elements: "<<endl;
    for(int i =0;i<n;i++)cin>>arr[i];
    sorting(arr,n);
    int ind=1;
    for(int i =1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])arr[ind++]=arr[i];
    }
    arr.resize(ind);
    for(int i =0;i<arr.size();i++)cout<<arr[i]<<" ";
}