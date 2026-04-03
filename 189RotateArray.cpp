#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    cout << "Enter the elements of array :";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the target :";
    cin >> k;
    k = k % n;
    reverse(arr, arr+n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
