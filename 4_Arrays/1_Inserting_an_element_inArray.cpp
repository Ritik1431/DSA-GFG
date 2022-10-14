#include <iostream>
using namespace std;
int insertelem(int arr[], int n, int x, int capacity, int position)
{
    if (n == capacity   )
        return n;

    int index = position - 1;
    for (int i = n - 1; i >=index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return n + 1;
}
int main()
{
    int n = 5;
    int arr[n] = {5, 6, 8, 9, 10};
    // BEFORE INSERTION
    for (int i = 0; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // AFTER INSERTION
    n = insertelem(arr, n, 7,6,3);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}