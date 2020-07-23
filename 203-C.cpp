#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, d; cin >> n >> d;
    pair<ll, ll> arr[n];
    ll a, b; cin >> a >> b;
    for (ll i = 0; i < n; i++)
    {
        ll l, r; cin >> l >> r;
        ll val = l * a + r * b;
        arr[i] = {val, i};
    }
    sort(arr, arr + n);
    ll cnt = 0, idx = -1, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if ((cnt + arr[i].first) > d) break;
        else
        {
            sum++;
            cnt += arr[i].first;
            idx = i;
        }
    }
    cout << sum << endl;
    for (ll i = 0; i <= idx; i++)
        cout << arr[i].second + 1 << " ";
    return 0;
}
