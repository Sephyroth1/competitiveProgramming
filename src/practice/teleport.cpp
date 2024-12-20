#include <bits/stdc++.h>
#include <fstream>

#define ll long long

using namespace std;

int main()
{
    ifstream fin("./input/teleport.in");
    ofstream fout("./output/teleport.out");
    if (!fin.is_open())
    {
        cerr << "Error: Cannot open input file.\n";
        return 1;
    }

    if (!fout.is_open())
    {
        cerr << "Error: Cannot open output file.\n";
        return 1;
    }
    ll a, b, x, y, ans, x1, x2, x3;
    fin >> a >> b >> x >> y;
    x1 = abs(a - b);
    x2 = abs(a - x) + abs(b - y);
    x3 = abs(a - y) + abs(b - x);
    fout << min({x1, x2, x3}) << "\n";
    return 0;
}