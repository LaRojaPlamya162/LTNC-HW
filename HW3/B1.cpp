#include <iostream>
using namespace std;
int Max=1000;
int main()
{
  int a[Max];
  int b[Max];
  int N;
  cin >> N;
  int dem=0;
  for (int i=1;i<=N;i++)
  {
          cin >> a[i];
          b[a[i]]=0;
  }
  for (int i=1;i<=N;i++)
  {
      b[a[i]]++;
  }
  for (int i=1;i<=N;i++)
  {
      if (b[a[i]]>1) dem++;
  }
  if (dem>0) cout <<"Yes";
  else cout <<"No";
}
