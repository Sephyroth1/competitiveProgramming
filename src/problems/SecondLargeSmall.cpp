#include <bits/stdc++.h>

using namespace std;

vector<int> secondLargestSmallest(vector<int> a)
{
    int largest = INT_MIN, secondLargest = INT_MIN, smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }

        if (a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < secondSmallest && a[i] != smallest)
        {
            secondSmallest = a[i];
        }
    }

    return {largest, secondLargest, smallest, secondSmallest};
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

    vector<int> res = secondLargestSmallest(inp);
    for (auto i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}