#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
for (int i=1;i<=n;i++)
{
for (int j=-n+1;j<=n-1;j++)
{
    if (i+j>=1&&i+j<=2*i-1) cout <<"*";
    else cout <<" ";
}
cout << endl;
}
}
