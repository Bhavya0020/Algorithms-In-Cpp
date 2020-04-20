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

void InsertionSort(vl &ar)
{
    if(ar.size()==1)
    {
        return ;
    }
    
    // Process --------
    // sort ar[0-1]
    // sort ar[0-2]
    // upto ar[0-n]
    // this can simply be done be checking if ar[0]>ar[1] -> swap them
    // now check ar[2] with ar[1] and then ar[0] and keep on swaping accordingly
    
    l n = ar.size();
    for(l i=1;i<n;i++)
    {
        for(l j=0;j<=i;j++)
        {
            if(ar[i]<ar[j])
            {
                swap(ar[i],ar[j]);
            }
        }
    }
    // Insertion Sort can also be performed like the method below

    // l i, key, j;  
    // for (i = 1; i < n; i++) 
    // {  
    //     key = arr[i];  
    //     j = i - 1;  
    //     /* Move elements of arr[0..i-1], that are  
    //     greater than key, to one position ahead  
    //     of their current position */
    //     while (j >= 0 && arr[j] > key) 
    //     {  
    //         arr[j + 1] = arr[j];  
    //         j = j - 1;  
    //     }  
    //     arr[j + 1] = key;  
    // }  
}

int main()
{
    l n=5;
    vl ar={3,5,2,1,4};
    // cin>>n;
    // vl ar(l,0);
    // for(auto &i:ar) cin>>i;
    InsertionSort(ar);
    for(auto &i:ar)
        cout<<i<<" ";
    return 0;
}