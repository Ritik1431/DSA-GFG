#include <bits/stdc++.h>
using namespace std;
const int r = 4,c = 4;
void search_element(int matt[r][c],int x)
{
    for(int i = 0; i < r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(matt[r][c]==x)
            {
                cout<<"Fount at ("<<r<<" , "<<c<<")";
                return;
            }
        }
    }
    cout<<"Not Found";
}
int main()
{
    
    return 0;
}