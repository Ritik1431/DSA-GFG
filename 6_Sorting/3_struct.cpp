#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x,y;
};
bool mycmp(point p1, point p2)
{
    return(p1.x < p2.x); // it will sort x component
    // return(p1.y < p2.y); // it will sort according to y part
}

int main()
{
    point arr[] = {{3,10},{2,8},{5,4}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n,mycmp);
    for(auto val : arr)
    {
        cout<<val.x<<" "<<val.y<<endl;
    }
    return 0;
}