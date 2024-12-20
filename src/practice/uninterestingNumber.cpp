#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define str string

bool isDivisBy9(ll n)
{
    ll sum = 0;
    for (int i = 0; i < (int)floor(log10((double)n)) + 1; i++)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 9 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n;
        cin >> n;
        str s;
        ll mod = 0, tmp = n;
        for (int i = 0; i < (int)floor(log10((double)n)) + 1; i++)
        {
            mod = n % 10;
            tmp /= 10;
            tmp += mod * mod;
            if (isDivisBy9(tmp))
            {
                s = "YES";
                break;
            }
            tmp = n / 10;
        }
        cout << s << "\n";
    }
}
