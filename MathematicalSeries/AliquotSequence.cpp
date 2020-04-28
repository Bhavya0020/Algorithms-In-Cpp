#include<bits/stdc++.h>

using namespace std;

#define l long long int

int  main()
{
    l n;
    cin>>n;
    cout<<n<<" ";
    l s=0,i=0;
    while(n>1)
    {
        s=0;
        i=1;
        while(i<n)
        {
            if(n%i==0)
                s+=i;
            i++;
        }
        cout<<s<<" ";
        n=s;
    }

    return 0;
}