#include <bits/stdc++.h>
using namespace std;
int Repeating_element(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }    
    }
    return -1;
}
int main()
{
    int arr[] = {0,2,1,5,4,6,4}; int n = 7;
    cout<<Repeating_element(arr,n);
    return 0;
}