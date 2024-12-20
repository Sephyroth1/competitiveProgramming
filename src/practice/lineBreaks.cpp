#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        vector<string> inp;
        ll n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            string tmp;
            cin >> tmp;
            inp.push_back(tmp);
        }
        ll s = 0, wc = 0;
        for (auto i : inp)
        {
            s += i.size();
            if (s > m)
            {
                break;
            }
            wc++;
        }
        cout << wc << "\n";
    }
}