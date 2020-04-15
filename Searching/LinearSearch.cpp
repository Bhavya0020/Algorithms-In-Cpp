//              LINEAR SEARCH

#include<bits/stdc++.h>

using namespace std;

#define l long long int 

int main()
{
    l n=5,x;
    vector<l> ar={1,4,3,5,2};

    l ele=3;  // Element to be searched
    bool found=false;
    // Taking Input
    // cin>>l;
    // for (l i=0;i<n;i++)
    // {
    //     cin>>x;
    //     ar.push_back(x);
    // }   
    // cin>>ele;

    for (auto &i:ar){
        if(i==ele)
        {
            found=true;
            break;
        }
    }

    cout<<boolalpha<<found;
    
    return 0;
}