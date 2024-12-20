#include <bits/stdc++.h>

using namespace std;

vector<int> findLeaders(vector<int> a)
{
    vector<int> res;
    int maxRight = a[a.size() - 1];
    res.push_back(maxRight);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= maxRight)
        {
            maxRight = a[i];
            res.push_back(maxRight);
        }
    }
    return res;
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

    vector<int> res = findLeaders(inp);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}