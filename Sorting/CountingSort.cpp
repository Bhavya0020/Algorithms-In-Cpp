//                          COUNTING SORT
//                  Sorts an array/vector in O(n+k) Time...
//             { n = size of array  , k = value of the maximum element in array }
//                     { Useful as long as n < k }
#include<bits/stdc++.h>

using namespace std;
#define l long long int 
#define vl vector<l>

void CountingSort(vl &ar)
{
    l max_=0;
    for(auto &i:ar)
    {
        max_=max(i,max_);
    }
    vl map_(max_+1,0) ;
    
    for(l i=0;i<ar.size();i++)
    {
        map_[ar[i]]++;
    }
    l j=0;
    for(l i=0;i<=max_;i++)
    {
        while(map_[i]!=0)
        {
            ar[j]=i;
            j++;
            map_[i]--;
        }
    }
    
}

int main()
{
    l n=5;
    vl ar={3,5,2,1,4};
    // cin>>n;
    // vl ar(l,0);
    // for(auto &i:ar) cin>>i;
    CountingSort(ar);
    for(auto &i:ar)
        cout<<i<<" ";
    
    return 0;
}