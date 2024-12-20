#include <bits/stdc++.h>

using namespace std;

vector<int> largestThree(vector<int> a)
{
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > first)
        {
            third = second;
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
        {
            second = a[i];
        }
        else if (a[i] > third && a[i] != second && a[i] != first)
        {
            third = a[i];
        }
    }

    return {first, second, third};
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

    vector<int> res = largestThree(inp);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}