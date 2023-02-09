#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n!=-1)
    {
        if (n%5==0)
        {
        n=n/5;
        cout << n;
        }
        else
        {
            n=-1;
            cout << n;
        }
    }
}
