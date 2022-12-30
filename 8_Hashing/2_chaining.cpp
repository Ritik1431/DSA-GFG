#include <bits/stdc++.h>
using namespace std;
struct Myhash
{
    int BUCKET;
    list<int> *table;
    
    Myhash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int k)
    {
        int i = k % BUCKET;
        table[i].push_back(k);
    }
    void Delete(int k)
    {
        int i = k % BUCKET;
        table[i].remove(k);
    }
    bool search(int k)
    {
        int i = k % BUCKET;
        for(auto x : table[i])
        {
            if(x==k)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Myhash mh = 7;
    mh.insert(10);
    mh.insert(20);
    mh.Delete(20);
    cout<<mh.search(20);

    return 0;
}