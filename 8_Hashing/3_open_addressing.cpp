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
        int h = hash(key);
        int i = h;
        while(arr[i]!=-1);
        {
            if(arr[i]==key)
            {
                return true;
            }
            i = (i+1)%cap;
            if(i==h)
            {
                return false;
            }
            return false;
        }

    }
};
int main()
{
    
    return 0;
}