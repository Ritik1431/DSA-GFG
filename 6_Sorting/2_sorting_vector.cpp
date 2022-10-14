#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr = {20,45,56,44,10};
    sort(arr.begin(),arr.end()); // In accending order
    for(auto val : arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end(),greater<int>()); // In decending order
    for(auto val : arr)
    {
        cout<<val<<" ";
    }
    return 0;
}