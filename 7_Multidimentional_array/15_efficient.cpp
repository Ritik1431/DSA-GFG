#include <bits/stdc++.h>
using namespace std;
const int r = 4, c = 4;
void search_element(int matt[r][c], int x)
{
    int i = 0, j = c-1;
    while (i<r&&j>=0)
    {
        if(matt[i][j]==x)
        {
            cout<<"Fount at ("<<i<<" , "<<j<<")";
            return;
        }
        else if(matt[i][j]>x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"Not Found";
    
}
int main()
{
    
    return 0;
}