#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>

using namespace std;

vi wheelFact(ll n)
{
    if (n == 1)
        return {};
    vi fact;
    fact[0] = 1;
    for (int d : {2, 3, 5})
        while (n % d == 0)
        {
            fact.push_back(d);
            n /= d;
        }

    vi increments = {4, 2, 4, 2, 4, 6, 2, 6};
    int j = 0;
    for (int i = 7; i * i <= n; i += increments[j++])
    {
        while (n % i == 0)
        {
            fact.push_back(i);
            n /= i;
        }
        if (j == 8)
        {
            j = 0;
        }
    }

    if (n > 1)
    {
        fact.push_back(n);
    }
    return fact;
}

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<ll> p;

        for (auto &x : p)
            cin >> x;
        
    }
}