#include <bits/stdc++.h>
using namespace std;
#include<unordered_set>
int countDistinct(int arr[],int n)
{
    // unordered_set<int> s;
    // for(int i = 0; i < n; i++)
    // {
    //     s.insert(arr[i]);
    // }

    // Improved way->>
    unordered_set<int>s(arr,arr+n);
    return s.size();
}
int main()
{
    int arr[] = {10,10,20,30,20};
    int n = 5;
    cout<<countDistinct(arr,n);
    return 0;
}