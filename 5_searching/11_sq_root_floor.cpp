#include <bits/stdc++.h>
using namespace std;
int sqRoot(int x)
{
    int i = 0;
    while (i * i <= x)
    {
        i++;
    }
    return (i - 1);
}
int main()
{
    cout << sqRoot(11);
    return 0;
}