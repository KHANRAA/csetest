//
// Created by AKASH KHANRA on 07/08/18.
//
#include <iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter the array size";
    cin>>n;
    int b[50];
    int a[n];
    int j=0;
    cout<<"ENter the array numbren\n";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a[i]=num;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[j]=i;
            j++;
        }
    }
for(int i=n-1;i>=0;i--)
{
    if(a[i]==0){
        a[i-1]=a[i];
    }
}
    int size = sizeof(b)/sizeof(b[0]);
cout<<b<<"hhhh";
for(int i=0;i<size;i++)
{
    cout<<a[i];
}
}
