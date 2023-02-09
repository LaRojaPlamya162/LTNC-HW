#include <bits/stdc++.h>
using namespace std;

int main()
{
    string f[10];
    a[0]="a";
    a[1]="b";
    for (int i=2;i<10;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout << a[9];
}
