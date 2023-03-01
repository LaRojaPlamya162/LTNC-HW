#include<bits/stdc++.h>
using namespace std ;

string doixau(int x)
{
    string ans = "";
    char c ;
    int du  ;
    while(x > 0)
    {
        du = x % 10 ;
        c = du + '0' ;
        x = x/10 ;
        ans = c + ans ;
    }
    return ans ;
}
bool check (string s )
{
    int i = 0 , j= s.size() -1 ;
    while( i < j && s[i] == s[j])
    {
        i++ ;
        j-- ;
    }
    if(i>=j) return true ;
    return false ;
}
int main()
{
    int n , a , b , cnt = 0  ;
    string s ;
    cin >> n ;
    for(int o = 1 ;o <= n ; o++)
    {
        cin >> a >> b ;
        for(int i = a ; i <=b ; i++)
        {
            s = doixau(i) ;
            if(check(s)) cnt ++ ;
        }
        cout << cnt << endl ;
        cnt = 0 ;
    }
}
