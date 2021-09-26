#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, Remain;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        Remain=a%b;

        cout << Remain << endl;
    }
}