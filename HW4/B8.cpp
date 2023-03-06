#include <iostream>
//#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //vector <int> a(;
    int a[500][500];
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=2;j++)
        {
            cin >> a[i][j];
        }
    }
    int x=1;
    int tam;
    while (x<=2)
    {
    for (int i=1;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i][x]<a[j][x])
            {
                tam=a[i][x];
                a[i][x]=a[j][x];
                a[j][x]=tam;
            }
        }
    }
    x++;
    }
        int dem=0;
        int y=1;
        for (int i=1;i<=n;i++)
        {
            if (a[i][y]>a[i][y+1])
            {
                dem++;
            }
        }
        //cout << dem;
        if (dem==n) cout<<"yes";
        else cout <<"no";
}

