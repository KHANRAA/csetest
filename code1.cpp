#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
#include <string.h>
using namespace std;
int distance(int ax, int ay, int bx, int by)
{
    // Calculating distance
    int p;
    p=abs(bx - ax) + abs(by - ay);
    return(p);
}



int main()
{


    int initials[5],ini=0;;
    std::string str1;
    cin>>str1;
    std::vector<int> vecto;
    std::stringstream sss(str1);
    int z;
    while (sss >> z) {
        vecto.push_back(z);

        if (sss.peek() == ',')
            sss.ignore();
    }
    for(std::vector<int>::size_type o = 0; o < vecto.size(); o++){
        {
            initials[ini]=vecto.at(o);
            // cout<<a[p]<<" abc ";
            ini++;
        }
    }
    int M,N,k,len;

    int p=0,s=0,t=0;

    M=initials[0];
    N=initials[1];
    k=initials[2];
    int aize;
    aize=(k*2)-1;
    int a[aize];
    int c[k-1];
    int r[k-1];
    std::string str;
    for(int j=0;j<k;j++) {
        cin >> str;
        std::vector<int> vect;
        std::stringstream ss(str);
        int i;
        while (ss >> i) {
            vect.push_back(i);

            if (ss.peek() == ',')
                ss.ignore();
        }
        for(std::vector<int>::size_type l = 0; l < vect.size(); l++){
            {
                a[p]=vect.at(l);
               // cout<<a[p]<<" abc ";
                p++;t2
            }
        }
    }

    for(int j=0;j<=aize;j=j+2)
    {
        //cout<<a[j];
        c[s]=a[j];
        s++;
    }
    /*for(int j=0;j<k;j++)
    {
        cout<<"cols:"<<c[j]<<" ";
    }*/

    for(int j=1;j<=aize;j=j+2)
    {
        r[t]=a[j];
        t++;
    }
    /*
    for(int j=0;j<k;j++)
    {
        cout<<"rows:"<<r[j]<<" ";
    }
*/
    p=0,s=0,t=0;int e=0;int f=0;
int d1,d2;
int com[10];
for(int u=0;u<M;++u)
{for(int v=0;v<N;++v)
{
    d1=distance(r[p],c[s],v,u);
    d2=distance(r[p+1],c[s+1],v,u);
    if(d1==d2)
    {
        com[e]=u;
        com[f]=v;
        e++;f++;
    }

}}

cout<<e--;

}