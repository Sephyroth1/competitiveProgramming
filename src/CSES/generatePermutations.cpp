#include <bits/stdc++.h>

#define ll long
#define str string

using namespace std;

void permutations(str &a, ll idx, set<str> &l)
{
    if (idx == a.size() - 1)
    {
        l.insert(a);
        return;
    }

    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permutations(a, idx + 1, l);
        swap(a[i], a[idx]);
    }
}

int main()
{
    str a;
    cin >> a;
    set<str> l;
    permutations(a, 0, l);
    cout << l.size() << "\n";
    for (auto i : l)
    {
        cout << i << "\n";
    }
    permutations(a, 0, l);
}