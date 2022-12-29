#include <bits/stdc++.h>
using namespace std;
void insert(bool arr[],int x)
{
    arr[x] = 1;
}
bool search(bool arr[],int x)
{
    if(arr[x]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
void Delete(bool arr[],int x)
{
    arr[x] = 0;
}
int main()
{
    bool arr[100] = {0};
    insert(arr,19);
    insert(arr,20);
    cout<<search(arr,15)<<endl;
    cout<<search(arr,19)<<endl; 
    return 0;
}