#include <bits/stdc++.h>
using namespace std;

int main()
{

    // input
    int n;
    cin >> n;

    vector<int> arr(n); // vector which will have the input

    for (int i = 0; i < n; i++)
    { // processing input
        cin >> arr[i];
    }

    // core logic

    int maxel = arr[0]; // asuming 1st element is maximum element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxel)
        {                   // if an element is bigger than 1st element
            maxel = arr[i]; // maxel will update
        }
    }

    cout << maxel;
}
