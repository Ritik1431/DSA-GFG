#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20,84,66,1,2};
    int n = 5;
    sort(arr,arr+n);  // In accending order
    for(auto val : arr)
    {
        cout<<val<<" ";
    }

    cout<<endl;
    
    sort(arr,arr+n,greater<int>()); // In decending order
    for(auto val : arr)
    {
        cout<<val<<" ";
    }
    
    return 0;
}