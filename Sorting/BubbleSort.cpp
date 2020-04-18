//                              BINARY SORT
//                      Sorts an array/vector in O(n*n) Time

#include<bits/stdc++.h>

using namespace std;

#define l long long int
#define vl vector<l>

// Swap Function (call by reference)
void swap(l *a,l *b)
{
    l temp = *a;
    *a = *b;
    *b = temp;
}
// Function For Binary Sort
void BinarySort(vl &ar)
{
    l n=ar.size();
    // Simple Binary Sort using values
    for(l i=0;i<n;i++)
    {
        for(l j=0;j<n-i-1;j++)
        {
            if(ar[j+1]<ar[j])
            {
                swap(&ar[j+1],&ar[j]);
            }
        }
    }
    // Binary Sort using Iterators
    // for(auto i=ar.begin();i!=ar.end();i++)
    // {
    //     for(auto j=ar.begin();j!=ar.end();j++)
    //     {
    //         if(*(j+1)<*j)
    //         {
    //             swap(*(j+1),*j);
    //         }
    //     }
    // }
}

int main()
{
    l n=6;
    vl ar={4,5,2,3,1,6};
    // cin>>n;
    // vl ar(n,0);
    // for(auto &i:ar) cin>>i;
    BinarySort(ar);
    for (l x:ar)
        cout<<x<<" ";
    return 0;
}