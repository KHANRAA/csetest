//
// Created by AKASH KHANRA on 13/08/18.
//

#include <iostream>
using namespace std;/*
bool found(int a[],int val)
{
    for (int i=0;i<5;i++)
        if(val==a[i])
            return true;
        return false;
}
int main()
{
    int a[]={1,2,3,0,6},b[7];
    for(int i=0;i<=6;i++)
    {
       if(found(a,i))
           b[i]=i;
       else
           b[i]=-1;

    }
    for(int i=0;i<=6;i++)
    {
        cout<<b[i]<<" ";
    }


}
 */

 int main()
 {
     int a[]={0,2,6,4,1,10},n=sizeof(a)/sizeof(a[0]);
    int largest;
    largest=a[0];

     for (int i = 1; i < n; i++)
     {
         if (largest < a[i])
             largest = a[i];
     }
     int t[largest];

     for(int i=0;i<=largest;i++)
     {
        t[i]=-1;
     }

     for(int i=0;i<n;i++)
             {

                 t[a[i]] = a[i];
             }
     for(int i=0;i<=largest;i++)
     {
         cout<<t[i]<<" ";
     }
 }
