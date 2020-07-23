#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
int main()
{
    int n, f;
    cin >> n >> f;
    int k[n], l[n];
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i] >> l[i];
        a.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
    }
    sort(a.rbegin(), a.rend());

    long long ans = 0;
    for (int i = 0; i < f; i++) {
        int pos = a[i].second;
        ans += min(2 * k[pos], l[pos]);
    }
    for (int i = f; i < n; i++) {
        int pos = a[i].second;
        ans += min(k[pos], l[pos]);
    }
    cout << ans;
}
