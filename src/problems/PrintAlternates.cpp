#include <bits/stdc++.h>

using namespace std;

void printAlternates(vector<int> a)
{
    int i = 0;
    while (i < a.size())
    {
        cout << a[i] << endl;
        i += 2;
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    printAlternates(a);
    return 0;
}