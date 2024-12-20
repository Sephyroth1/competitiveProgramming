#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        string n;
        cin >> n;
        string tmp = n;
        for (int i = n.size() - 1; i >= n.size() / 2; i--)
        {
            swap(n[i], n[n.size() - i - 1]);
        }
        if (tmp == n && n[0] != n[n.size() - 1])
            cout << n << "\n";
        else
        {
            for (auto &l : n)
            {
                if (l == 'p')
                    l = 'q';
                else if (l == 'q')
                    l = 'p';
            }
            cout << n << "\n";
        }
    }
    return 0;
}