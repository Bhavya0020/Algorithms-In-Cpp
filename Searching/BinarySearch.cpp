//                      BINARY SEARCH 
//          Works only in sorted array  -----   Can search the element in O(log2(n))

#include<bits/stdc++.h>

using namespace std;

#define l long long int 
#define vi vector<int>
#define vl vector<l>

bool BinarySearch(l n,l x,int *ar)
{
    // Algorithm for BinarySearch.....
    l li=0,ri=n-1,mid;
    while(li<=ri)
    {
        mid=(li+ri)/2;
        if(ar[mid]==x)
        {
            return true;
        }
        else if(ar[mid]<x)
        {
            li=mid+1;
        }
        else{
            ri=mid-1;
        }
    }
    return false;
}


int main()
{
    l n=5,x=3;
    int ar[n]={1,2,3,4,5};
    // cin>>n;
    // vl v(n,0);   //or we can just declare an array instead of a vector like
    // l v[n];
    // for(auto &i:v)  cin>>i;      // Input of unsorted array
    // cin>>x;          //Element to be searched 
    // sort(v.begin(),v.end());     // Sort Using STL to make the array usable with binary search

    // // STL for BinarySearch---
    // binary_search(ar,ar+n,x) ? cout<<"Element Found" : cout<<"Element Not found";  // This works in arrays only

    cout<<boolalpha<<BinarySearch(n,x,ar);   

    return 0;
}