//                          SELECTION SORT
//                  Sorts an array/vector in O(n) Time...

#include<bits/stdc++.h>

using namespace std;

#define l long long int 
#define vl vector<l>

void swap(l *a,l *b)
{
    l temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(vl &ar)
{
    l n = ar.size();
    for(l i=0;i<n;i++)
    {
        // We make ar[0] the minimum element in the array
        // ar[1] as second smallest and so on....
        for(l j=i+1;j<n;j++)
        {
            if(ar[j]<ar[i]) 
                swap(ar[i],ar[j]);
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
    SelectionSort(ar);
    for(auto &i:ar)
        cout<<i<<" ";
    return 0;
}