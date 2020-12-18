#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,2,3,4,5,6,6,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    int temp[n]={0};
    int j=0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
            temp[j++]=arr[i];    
    }
    temp[j]=arr[n-1];

    for(int i=0;i<=j;i++)
    {
       arr[i]=temp[i];
    }
    for (int i = 0; i <= j; i++)
    {
       cout<<arr[i]<<" ";
    }
}