#include <bits/stdc++.h>
using namespace std;
int ipartition(int arr[], int l ,int h) // Partition using lemuto partition.
{
    int pivot = arr[h];
    int i = l-1;
    for (int j = l; j < h-1; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;    
}
int qsort(int arr[], int l , int h)
{
    if(l<h)
    {
        int p = ipartition(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}
int main()
{
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	qsort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
    return 0;
}