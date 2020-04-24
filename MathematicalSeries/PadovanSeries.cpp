#include<bits/stdc++.h>

using namespace std;

#define l long long int 

l padovan(l n)
{
    int ans=0;
    l a=1,b=1,c=1,x=2;
    if(n<=2)
    {
        return 1;
    }
    else{
        for(;x<=n;x++)
        {
            ans=b+a;
            a=b;
            b=c;
            c=ans;
            // b=ans;
            cout<<ans<<" ";
        }
    }
    return ans;
}

int main()
{
    l n;
    cin>>n;
    cout<<padovan(n);
    return 0;
}