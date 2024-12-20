#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int n)
{
    string num = to_string(n);
    string res = string(num.rbegin(), num.rend());
    return num == res;
}

void checkLargestNum()
{
    int max = INT_MIN, product = 1;
    for (int i = 900; i < 1000; i++)
    {
        for (int j = i; j < 1000; j++)
        {
            product = i * j;
            if (isPalindrome(product))
            {
                if (product > max)
                {
                    cout << product << endl;
                    max = product;
                }
            }
        }
    }

    cout << max << endl;
}

int main()
{
    checkLargestNum();
    return 0;
}