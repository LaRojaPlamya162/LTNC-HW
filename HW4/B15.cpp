
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        int a[100];
        int dem=0;
        int k;
        cin >> k;
        int p=1;
        for (int j=1;j<=k;j++)
        {
            cin >> a[j];
        }
        int z=2;
        while (z<k)
        {
            int s=0;
            int q=0;
            for (int j=1;j<z;j++)
            {
                s+=a[j];
            }
            for (int j=k;j>z;j--)
            {
                q+=a[j];
            }
            if (s==q)
            {
                dem++;
            }
            z++;

        }
        if (dem==0) cout <<"No"<<endl;
        else cout <<"Yes"<<endl;
