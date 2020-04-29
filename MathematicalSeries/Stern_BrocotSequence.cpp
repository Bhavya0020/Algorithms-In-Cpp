#include <bits/stdc++.h>

using namespace std;

#define l long long int

void Brocot(l n)
{
    vector<l> ar;
    ar.push_back(1);
    ar.push_back(1);
    l cur_ele = 0, pre_ele = 0;
    for (l i = 1; i < n; i ++)
    {
        cur_ele = ar[i];
        pre_ele = ar[i - 1];
        ar.push_back(cur_ele + pre_ele);
        ar.push_back(cur_ele);
    }
    for (l i = 0; i < n; i++)
        cout << ar[i] << " ";
}

int main()
{
    l n;
    cin >> n;
    Brocot(n);
    return 0;
}