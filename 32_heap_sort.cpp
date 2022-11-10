#include <bits/stdc++.h>
using namespace std;
void maxHeapify(int arr[],int n, int i)
{
    int largest = i,left = 2*i+1,right = 2*i+2;
    if(left<n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest = right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,i);
    }
}
void build_heap(int arr[], int n)
{
    for (int i = (n-2)/2; i>=0; i--)
    {
        maxHeapify(arr,n,i);
    }
    
}
void heap_sort(int arr[],int n)
{
    build_heap(arr,n);
    for (int i = n-1; i>0; i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
    
}
void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heap_sort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n);
    return 0;
}