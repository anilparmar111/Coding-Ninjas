#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ok(ll *arr, ll n, ll mid, ll tr)
{
    ll tmp = 0;
    for (int i = 0; i < n; i++)
    {
        tmp += arr[i] / mid;
        if (tmp >= tr)
        {
            return true;
        }
    }
    if (tmp >= tr)
    {
        return true;
    }
    return false;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll li = 0, ri = arr[n - 1];
        ll ans = 0;
        while (li <= ri)
        {
            ll mid = li + (ri - li) / 2;
            if (ok(arr, n, mid, k))
            {
                ans = mid;
                li = mid + 1;
            }
            else
            {
                ri = mid - 1;
            }
        }
        cout << ans << endl;
    }
}