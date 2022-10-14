// naive solution
#include <bits/stdc++.h>
using namespace std;
bool is_triplet(int arr[], int n, int x)
{
    for (int i = 0; i < n-2; i++)
    {
        for (int  j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k] == x)
                {
                    return true;
                }
            }
            
        }
        
    }
    return false;
    
}
int main()
{
    int arr[] = {2,3,4,8,9,20,40};
    int n = 7;
    int x = 6720;
    cout<<is_triplet(arr,n,x);
    return 0;
}