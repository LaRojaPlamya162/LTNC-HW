#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d[10000];
    int e[10000];
    int a[n+1];
    int b[n+2];
    //int tam;
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=n+1;i++) cin >> b[i];
    /*for (int i=1;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i]<a[j])
            {
                tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
        }
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=i+1;j<=n+1;j++)
        {
            if (b[i]<b[j])
            {
                tam=b[i];
                b[i]=b[j];
                b[j]=tam;
            }
        }
    }
    for (int i=1;i<=n;i++) cout << a[i]<<" ";
    cout << endl;
    for (int i=1;i<=n+1;i++) cout << b[i]<<" ";
    cout << endl;*/
    for (int i=1;i<=n+1;i++) d[b[i]]=0;
    for (int i=1;i<=n+1;i++) e[b[i]]=0;
    for (int i=1;i<=n;i++) d[a[i]]++;
    for (int i=1;i<=n+1;i++) e[b[i]]++;
    for (int i=1;i<=n+1;i++)
    {
        if ((d[b[i]]==0)||(d[b[i]]<e[b[i]])) {cout << b[i]<<" ";break;}
    }
}
