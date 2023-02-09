#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double a[1000];
    double s=0;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    double avr = s/n;
    if (avr > int(avr)) avr=int(avr)+1;
    int max = a[1];
    for (int i=2;i<=n;i++)
    {
        if (a[i]>max) max=a[i];
    }
    int min = a[1];
    for (int i=2;i<=n;i++)
    {
        if (a[i]<min) min=a[i];
    }
    cout << avr <<endl << max <<endl << min << endl;

}
