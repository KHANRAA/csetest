//
// Created by AKASH KHANRA on 13/08/18.
//

#include <iostream>
using namespace std;
void rotate_l(int a[],int n)
{
    int t=a[0];
    for(int i=0;i<n-1;i++)
        a[i]=a[i+1];
    a[n-1]=t;
}

void rotatearray(int a[],int n,int l)
{
    for(int i=0;i<l;i++)
        rotate_l(a,n);
}

int main()
{
    int a[]={1,2,3,4,5},l=2,n=sizeof(a)/sizeof(a[0]);
    rotatearray(a,n,l);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";


}
