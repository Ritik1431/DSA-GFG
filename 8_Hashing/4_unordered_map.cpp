#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m;
    m["gfg"] = 20;
    m["Ritik"] = 15;
    m["Rajput"] = 16;
    if(m.find("Ritik")!=m.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    for(auto it = m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //  Alternative Ways to find the element
    if(m.count("Ritik")>0)
    {
        cout<<"Found"<<endl;
    }
    else
        {
            cout<<"NotFound"<<endl;
        }
    // Size function
    cout<<"Size : "<<m.size()<<endl;
    m.erase("Ritik");
    cout<<"Size : "<<m.size()<<endl;

    return 0;
}