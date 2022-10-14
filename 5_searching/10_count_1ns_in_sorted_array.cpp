#include <bits/stdc++.h>
using namespace std;
int count_ons(int arr[],int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
            count = n-i;
            return count;
        }
    }
    return count;
    
      
}
int main()
{
    int arr[] = {0,0,0,1,1};
    cout<<count_ons(arr,5);
    return 0;
}