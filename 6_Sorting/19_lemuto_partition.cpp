#include <bits/stdc++.h>
using namespace std;
int lemuto_partition(int arr[], int l,int h)
{
    int pivot = arr[h];  // Always last element.
    int i = l-1;
    for (int j = l; i < h-1; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],pivot);
    return (i+1);
}
int main()
{
    int arr[] = {10,80,30,90,40,50,70};
    int h = sizeof(arr)/sizeof(arr[0]);
    lemuto_partition(arr,0,h);
    return 0;
}