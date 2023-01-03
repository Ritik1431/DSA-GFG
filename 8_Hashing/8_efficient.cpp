#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
int intersection(int a[], int b[], int m , int n)
{
    unordered_set<int> s;
    for(int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    int res = 0;
    for(int j=0; j<n; j++)
    {
        if(s.find(b[j])!=s.end())
        {
            res++;
            s.erase(b[j]);
        }
    }
    return res;
}
int main()
{
    int a[] = {10,20,30,20,5};
    int b[] = {10,10,5};
    int m = 5, n = 3;
    cout<<intersection(a,b,m,n);
    return 0;
}