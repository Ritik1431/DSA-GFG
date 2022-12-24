#include <bits/stdc++.h>
using namespace std;
void mergeOverlap(pair<int, int> *a, int n) {
    sort(a, a+n, compare);
    vector<pair<int,int>> v;
    pair<int , int> p;
    p = a[0];
    for(int i = 1; i < n; i++) 
    {
        if(p.second >= a[i].first) 
        {
            if(p.second < a[i].second) 
            {
                p.second = a[i].second;
            }
        } 
        else 
        {
            v.push_back(p);
            p = a[i];
        }
    }
    v.push_back(p);
    for(auto p : v) 
    {
        cout << p.first << " " << p.second << endl;
    }
}
int main()
{
    
    return 0;
}
