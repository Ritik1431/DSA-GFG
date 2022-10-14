#include <bits/stdc++.h>
using namespace std;
int last_occ(int arr[],int low, int high,int x,int n)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(x>arr[mid]) return last_occ(arr,mid+1,high,x,n);
    else if(x<arr[mid]) return last_occ(arr,low,mid-1,x,n);
    else 
    {
        if(mid==n-1 || arr[mid+1]!=arr[mid]) return mid;
        else return last_occ(arr,mid+1,high,x,n);
    }
}
int main()
{
    int arr[] = {10,20,32,32,45,56};
    int x = 32,n = 6;
    cout<<last_occ(arr,0,6,x,n);
    return 0;
}