//
// Created by AKASH KHANRA on 13/08/18.
//

#include <iostream>
using namespace std;
int rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return(arr);
}

int main()
{
    int a[]={1,2,3,4,5},n= sizeof(a)/ sizeof(a[0]);
    int second[5];
    int p=0,q=0;
    int m;
    int first[m];
    cin>>m;

    for(int i=m;i<n;i++)
    {
        second[i]=a[i];

    }
    for(int i=0;i<m;i++)
    {
        first[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        first[m]=rvereseArray(first,0,n-m);
    }

    for(int i=0;i<m;i++)
    {
        second[n-m]=rvereseArray(second,0,m);
    }
    for(int i=0;i<n-m;i++)
    {
        a[i]=second[i];
    }

    for(int i=m;i<n+m;i++)
    {
        a[i]=second[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}