#include <bits/stdc++.h>
using namespace std;
void segregate_negpos(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }

}
int main()
{
    int arr[] = {-5,9,10,-14,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate_negpos(arr,n);
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    return 0;
}