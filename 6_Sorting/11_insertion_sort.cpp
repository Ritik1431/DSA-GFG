#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int step = 1; step < n; step++)
    {
        int key = arr[step];
        int j = step-1;
        while(key<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}
int main()
{
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    for(auto i: data)
    {
        cout<<i<<" ";
    }
    
    return 0;
}