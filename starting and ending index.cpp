//
// Created by AKASH KHANRA on 14/08/18.
//

#include <iostream>
using namespace std;

int answer(int a[],int n)
{

    int tillnow=0,start=0,Max=0,stop=0,s=0;
    for(int i=0;i<n;i++) {
        tillnow += a[i];
        if (tillnow < 0) {
            s=i+1;
            tillnow=0;
        }
        else if(Max<tillnow) {
            Max=tillnow;
            start=s;
            stop=i;
        }
    }
    cout<<"Start: "<<start<<" stop:"<<stop<<endl;
    return  Max;
}

int main()
{

    int a[]={-1,-5,3,4,-5},n= sizeof(a)/ sizeof(a[0]);
    cout<<answer(a,n);

}