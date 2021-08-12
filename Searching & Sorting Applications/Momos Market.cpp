#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // write your code
    ll n;
    cin >> n;
    ll price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    ll q;
    ll ans = 0;
    // ll pres[n]=0;
    for (ll i = 1; i < n; i++)
    {
        price[i] += price[i - 1];
    }
    cin >> q;
    while (q--)
    {
        ll tmp;
        cin >> tmp;
        ll lb = lower_bound(price, price + n, tmp) - price;
        if (lb == 0)
        {
            if (price[0] > tmp)
            {
                cout << 0 << " " << 0 << endl;
            }
            else
            {
                cout << 1 << " " << tmp - price[0] << endl;
            }
        }
        else if (price[lb] == tmp)
        {
            cout << lb + 1 << " " << 0 << endl;
        }
        else
        {
            cout << lb << " " << tmp - price[lb - 1] << endl;
        }
    }
}