#include <iostream>
using namespace std;
void CountSetBits(int n)
{
    int res = 0;
    while(n>0)
    {
    if(n%2!=0)
        res++;
    n = n/2;
    cout<<res;
    }

}
int main()
{
    CountSetBits(5);
    return 0;
}