//
// Created by AKASH KHANRA on 14/08/18.
//

#include <iostream>
using namespace std;

int answer(int a[],int n)
{
    int tillnow=a[0],Max=a[0];
    for(int i=1;i<n;i++)
    {
        tillnow=max(a[i],tillnow+a[i]);
        Max=max(Max,tillnow);
    }
    return Max;
}

int main()
{

    int a[]={-1,-2,-100,200,3,6},n= sizeof(a)/ sizeof(a[0]);
    cout<<answer(a,n);

}