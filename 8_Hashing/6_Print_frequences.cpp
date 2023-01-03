#include <bits/stdc++.h>
using namespace std;
#include<unordered_map>
int countFrequency(int arr[], int n)
{
    unordered_map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for(auto x : m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
    int arr[] = {10,20,30,40,40,10};
    int n = 6;
    countFrequency(arr,n);
    return 0;
}