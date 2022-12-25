#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int arr[m][n] = {{10,2},{2,3},{4,5}};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}