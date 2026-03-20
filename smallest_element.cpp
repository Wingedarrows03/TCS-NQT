#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minell = arr[0];

    int i = 1;
    while (i < n)
    {
        if (arr[i] < minell)
        {
            minell = arr[i];
        }
        i++;
    }

    cout << minell;

    return 0;
}