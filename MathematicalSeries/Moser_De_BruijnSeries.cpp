#include<bits/stdc++.h>

using namespace std;
#define l long long int 
#define vl vector<l>

void De_bruijn(l n)
{
    // l a=1,b=1;
    vl ar(n+1,0);
    ar[0]=0;
    ar[1]=1;
    l i=2;
    for(;i<=n;i++)
    {
        if((i&1))
        {
            ar[i]=4*ar[i/2]+1;
        }
        else{
            ar[i]=4*ar[i/2];
        }
    }
    for(auto &i:ar)
        cout<<i<<" ";
}

int main()
{
    l n;
    cin>>n;
    De_bruijn(n);
    return 0;
}