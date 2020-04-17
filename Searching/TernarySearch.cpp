//                      TERNARY SEARCH
//          Works only in sorted array  -----   Can search the element in O(log3(n))

#include <bits/stdc++.h>

using namespace std;

#define l long long int
#define vl vector<l>

bool TernarySearch(l li, l ri, vl &ar, l x)
{
    l mid1, mid2;
    mid1 = li + (ri - li) / 3;
    mid2 = ri - (ri - li) / 3;
    bool found = false;
    // cout<<mid1<<" "<<mid2<<" ";
    if (ri >= li)
    {
        if (ar[mid1] == x)
        {
            found = true;
            return found;
        }
        if (ar[mid2] == x)
        {
            found = true;
            return found;
        }
        if (ar[mid1] > x)
        {
            return found = found || TernarySearch(li, mid1 - 1, ar, x);
        }
        else if (ar[mid2] < x)
        {
            return found = found || TernarySearch(mid2 + 1, ri, ar, x);
        }
        else
        {
            return found = found || TernarySearch(mid1 + 1, mid2 - 1, ar, x);
        }
    }

    return found;
}

int main()
{
    l n = 5;
    vl ar = {1, 2, 3, 4, 5};
    l x = 9;
    // Taking Input
    // cin>>n;
    // vl ar(n,0);
    // for(auto &i:ar)
    //     cin>>i;
    // cin>>x;      // Element to be searched
    // sort(ar.begin(),ar.end())
    l li = 0, ri = n - 1;
    // ri = ar.size() - 1;
    cout << boolalpha << TernarySearch(li, ri, ar, x);
    return 0;
}