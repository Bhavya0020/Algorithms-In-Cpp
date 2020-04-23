//                      JUGGLER  SEQUENCE
//      a(n+1)={ a(n)^1/2  -- if n is even } 
//      a(n+1)={ a(n)^3/2  -- if n is odd  }

#include<bits/stdc++.h>

using namespace std;

#define l long long int 

int main()
{
    l n;
    cin>>n;
    cout<<n<<" ";

    while(n>1)
    {
        l b=0;
        ((n&1)) ? b=floor(sqrt(n)*sqrt(n)*sqrt(n)) : b=floor(sqrt(n));

        cout<<b<<" ";
        n=b; 
    }
    return 0;
}