#include <bits/stdc++.h>

using namespace std;

bool checkSorted(vector<int> a, int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }

    return a[n - 1] >= a[n - 2] && checkSorted(a, n - 1);
}

int main()
{
    vector<int> inp;
    int i = 0;
    string input;

    while (true)
    {
        cout << "Input the " << i << " element: ";
        cin >> input;

        if (input == "q")
        {
            break;
        }

        stringstream ss(input);
        int number;
        if (ss >> number)
        {
            inp.push_back(number);
            i++;
        }
        else
        {
            cout << "Invalid input. Enter a number or press q: ";
        }
    }

    bool state = checkSorted(inp, inp.size());
    cout << ((state) ? "True" : "False") << " ";
    return 0;
}