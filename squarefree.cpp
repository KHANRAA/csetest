//
// Created by AKASH KHANRA on 10/08/18.
//

#include <iostream>
#include <math.h>
#include <algorithm>
#include <iterator>
using  namespace std;
bool isPerfect(long double x)
{

    //stack overflow
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}
bool isprime(long p)
{
    bool ip=true;
    for(int i = 2; i <= p / 2; ++i)
    {
        if(p % i == 0)
        {
            ip = false;
            break;
        }
    }
    if (ip)
        return(true);
    else
        return(false);


}

bool isSquareFree(int n)
{
    if (n % 2 == 0)
        n = n/2;
// taken from geeks for geeks
    // If 2 again divides n, then n is
    // not a square free number.
    if (n % 2 == 0)
        return false;

    // n must be odd at this point. So we can
    // skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // Check if i is a prime factor
        if (n % i == 0)
        {
            n = n/i;

            // If i again divides, then
            // n is not square free
            if (n % i == 0)
                return false;
        }
    }

    return true;
}




int main() {

    bool sqfree = true, prime = true, perf = true;
    long long n;
    cin >> n;
    int *arr = new int[1];
    int *sqrr = new int[1];
    int *prr = new int[1];
    int *final = new int[1];
    int count = 0, p = 0, sq = 0, pr = 0, fl = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            arr[count] = i;
            count++;
        }

    }
    for (int i = 0; i < count - 1; i++)
    {
        if (isPerfect(arr[i]))
        {
            sqrr[sq] = i;
            sq++;
           // cout<<"\nperfect root: "<<arr[i]<<" ";
        }
        else
            {
            prime = isprime(arr[i]);
            if (prime == true)
            {
                prr[pr] = arr[i];
                final[fl] = arr[i];
                fl++;
             //   cout<<"\nperfect prime: "<<arr[i]<<" ";
            } else
                {
                for (int j = 0; j < count - 1; j++)
                {
                    if (arr[i] % arr[j] == 0)
                    {
                        if (isSquareFree(arr[i])) {
                            final[fl] = arr[i];
                            fl++;
                           // cout<<"\nSquare free: "<<arr[i]<<" ";
                        }
                    }
                }
            }
        }

    }

     for (int i = 0; i < fl; i++) {
          for (int j = i + 1; j < fl;) {
              if (final[j] == final[i]) {
                  for (int k = j; k < fl; k++) {
                      final[k] = final[k + 1];
                  }
                  fl--;
              } else
                  j++;
          }
      }



    cout<<fl;



}
