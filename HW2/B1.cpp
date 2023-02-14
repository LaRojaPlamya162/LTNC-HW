#include <bits/stdc++.h>
using namespace std;
int Prime(int n){
    if (n==2) return true;
    else
    {
    for (int i=2; i<=n/2; i++){
        if (n%i==0) return false;
    }
    return true;
    }
}
int main(){
    int n;
    cin >> n;
    if (Prime(n)==true) cout << "yes";
    else cout << "no";
}
