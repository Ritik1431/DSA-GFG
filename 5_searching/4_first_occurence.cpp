#include <bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if(x==arr[i])
        return i;
    }
    return -1;
    
}
int main()
{
    int arr[] = {1,10,10,10,20,40};
    int n = 6;
    int x = 20;
    cout<<first_occurence(arr,n,x);
    return 0;
}