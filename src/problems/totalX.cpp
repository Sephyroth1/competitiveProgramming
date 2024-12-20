#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int lcm(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return abs(a * b) / gcd(a, b);
}

int getTotalX(vector<int> a, vector<int> b)
{
    int multiple = b[0], factor = a[0];
    for (int i : b)
    {
        multiple = gcd(i, multiple);
    }

    cout << "Multiple: " << multiple << endl;

    for (int i : a)
    {
        factor = lcm(i, factor);
        if (factor > multiple)
        {
            return 0;
        }
    }

    cout << "Factor: " << factor << endl;

    if (multiple % factor != 0)
    {
        return 0;
    }

    int totalX = 0;
    for (int i = factor; i <= multiple; i += factor)
    {
        if (multiple % i == 0)
        {
            totalX++;
        }
    }
    return totalX;
}

int main()
{
    vector<int> a = {2, 6};
    vector<int> b = {24, 36};
    int count = getTotalX(a, b);
    cout << count << " " << endl;
    return 0;
}