#include<bits/stdc++.h>

using namespace std;

void Stringsort(string &s)
{
    // a string is a data type which contains a group of Alphabets  {not considerings Special characters but the method will work on them}
    // so in that case the best option will be Counting Sort
    // as Counting Sort Complexity is O(n+k) in case of a string/character array k = [0,26]
    // Hence we can sort such type of arrays using counting sort
    char max_='a';
    for(char c:s)
        (c>max_)? max_=c : max_=max_;

    // Or we can just use 26 as a value of max_....
    long n = max_-'a';
    vector<int> count(n+1,0);
    for(char c:s)
    {
        count[c-'a']++;
    }

    int j=0;
    for(int i=0;i<=n;i++)
    {
        while(count[i]!=0)
        {
            s[j] = i+'a';
            j++;
            count[i]--;
        }
    }
}

int main()
{
    string s;
    cin>>s;
    Stringsort(s);
    cout<<s;
    return 0;
}