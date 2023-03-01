#include <iostream>
using namespace std;
int main()
{
    int m,n;
    int b[1000];
    int a[500][500];
    cin >> m >> n;
    int A=1;
    int B=1;
    int C=n;
    int D=m;
    int z=1;
    while(A<C&&B<D)
    {
    for (int i=A;i<C;i++)
    {
        a[A][i]=z;
        //cout <<z<<" ";
        z++;
    }
    for (int i=B;i<D;i++)
    {
        a[i][C]=z;
        //cout << z<< " ";
        z++;
    }
    for (int i=C;i>A;i--)
    {
        a[D][i]=z;
        //cout << z<<" ";
        z++;
    }
    for (int i=D;i>B;i--)
    {
        a[i][A]=z;
        //cout <<z<< " ";
        z++;
    }
    D--;
    C--;
    A++;
    B++;
    }
for (int i=1;i<=m;i++)
    {
for (int j=1;j<=n;j++)
{
    cout << a[i][j]<<" ";
}
cout << endl;
}
}
