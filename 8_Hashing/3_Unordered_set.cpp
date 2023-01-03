#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(13);
    for(auto x : s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    s.erase(15);
    for(auto it = s.begin(); it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;   // Will give the size
    s.clear();              // Clear the unordered set
    cout<<s.size()<<endl;

    
    // Search in unordered set
    if(s.find(15)==s.end())
    {
        cout<<"Not found "<<endl;
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}