#include <bits/stdc++.h>
using namespace std;
struct Myhash
{
    int *arr;
    int cap,size;
    Myhash(int c)
    {
        cap = c;
        size = 0;
        for(int i = 0; i < cap; i++)
        {
            arr[i] = -1;

        }
    }
    int hash(int key)
    {
        return key% cap;
    }
    bool search(int key)
    {
        
    }
};
int main()
{
    
    return 0;
}