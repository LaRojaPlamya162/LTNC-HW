#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[10000];
  for (int i=1;i<=n;i++)
  {
      cin >> a[i];
  }
  for (int i=1;i<n;i++)
  {
      for (int j=i+1;j<=n;j++)
      {
          if (a[i]+a[j]==0) {cout << a[i]<<" "<<a[j]<<" ";break;}
      }
  }
}
