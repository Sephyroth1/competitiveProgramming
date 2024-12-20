#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll grayCode(ll n)
{
    return n ^ (n >> 1);
}

ll count_bits(ll n)
{
    ll res = 0;
    for (; n; n >>= 1)
        res += n & 1;
    return res;
}

void all_comb(int n, int k)
{
    for (int i = 0; i < (1 << n); i++)
    {
        ll cur = grayCode(i);
        if (count_bits(cur) == k)
        {
            for (int j = 0; j < n; j++)
            {
                if (cur & (1 << j))
                {
                    cout << j + 1;
                }
            }
        }
        cout << "\n";
    }
}

int main()
{
    ll n, k;
    cin >> n >> k;
    all_comb(n, k);
    return 0;
}