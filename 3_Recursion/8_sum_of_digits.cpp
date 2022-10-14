#include <iostream>
using namespace std;
int getsum(int n)
{
    int sum=0;
    if(n==0)
    {
        return 0;
    }
    else
    return getsum(n/10) + n%10;

}
int main()
{
    cout<<getsum(253);
    return 0;
}