#include <bits/stdc++.h>
using namespace std;
// void print(int mat[3][2])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j=0; j<2; j++)
//         {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// now works for any no of rows.
void print(int mat[][2],int m)
{
    for (int i = 0; i < m; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int mat[3][2] = {{1,2},{3,4},{4,5}};
    print(mat,3);

    return 0;
}