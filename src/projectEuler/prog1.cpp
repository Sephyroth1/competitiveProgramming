#include <bits/stdc++.h>

using namespace std;

long long int largestPrimeFactor(long long int n)
{
    int maxPrime = -1;
    while (n % 2 == 0)
    {
        maxPrime = 2;
        n >>= 1;
    }

    while (n % 3 == 0)
    {
        maxPrime = 3;
        n /= 3;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            maxPrime = i;
            n /= i;
        }

        while (n % (i + 2) == 0)
        {
            maxPrime = (i + 2);
            n /= (i + 2);
        }
    }

    if (n > 4)
    {
        maxPrime = n;
    }

    return maxPrime;
}

void fibonacciSum()
{
    int n = 10, sum = 0, fib1 = 0, fib2 = 1, fib3 = 0, i = 0;
    while (fib3 <= 4000000)
    {
        fib3 = fib2 + fib1;
        if (fib3 % 2 == 0)
        {
            sum += fib3;
        }

        fib1 = fib2;
        fib2 = fib3;
        i++;
    }
    cout << "\n"
         << sum << "\n";
}

int main()
{
    long long int n = 600851475143;
    long long int res = largestPrimeFactor(n);
    cout << res << endl;
    return 0;
}