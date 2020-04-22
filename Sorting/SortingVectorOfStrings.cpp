#include<bits/stdc++.h>

using namespace std;

#define MAX_NAMES 5

string namesS[MAX_NAMES]={"12","22","13","23","30"};

void sortNames(){

    sort(namesS,namesS+MAX_NAMES);
}

int main(){
    sortNames();
    // for(auto &i:namesS)
    //     cout<<i<<" ";
    for(int i=0;i<MAX_NAMES;i++)
        cout<<namesS[i]<<" ";
}