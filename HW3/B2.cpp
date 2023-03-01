#include <iostream>
#include <string>
using namespace std;
int Max=1000;
int main()
{
string s;
cin >> s;
int dem=0;
int k =s.size();
for (int i=0;i<k;i++)
{
    if (s[i]==s[k-i-1])dem++;
}
if (dem==k) cout <<"Yes";
else cout <<"No";
}
