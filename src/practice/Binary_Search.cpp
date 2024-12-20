#include <bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int> a, int key, int low, int high)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == key)
        {
            return mid;
        }

        if (a[mid] > key)
        {
            return BinarySearch(a, key, 0, mid - 1);
        }

        return BinarySearch(a, key, mid + 1, key);
    }
    return -1;
}

int main()
{
    vector<int> res;
    string input;
    int i = 0;
    while (cin >> input)
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

    int key;
    cout << "Enter the target element to search: ";
    cin >> key;

    int result = BinarySearch(res, key, 0, res.size() - 1);
    if (result == -1)
    {
        cout << "Searching ended in failure. Element not found";
    }
    cout << "Element Found at " << result + 1 << "position." << endl;
    return 0;
}