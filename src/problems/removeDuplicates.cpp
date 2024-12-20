#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &a)
{
    int n = a.size();
    if (n == 1)
    {
        return -1;
    }

    int idx = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            a[idx++] = a[i];
        }
    }
    return idx;
}

int main()
{

    vector<int> res;
    string input;
    int i = 0;
    while (true)
    {
        cout << "Enter " << i << "element: ";
        cin >> input;

        if (input == "q")
        {
            break;
        }

        stringstream ss(input);
        int number;
        if (ss >> number)
        {
            i++;
            res.push_back(number);
        }
        else
        {
            cout << "Invalid Input. Enter a number or press q to quit";
        }
    }

    int fin = removeDuplicates(res);
    cout << fin << " ";

    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}