#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    int a[d];
    for (int i = 0; i < d; i++)
    {
        a[i] = arr[i];
    }

    for (int j = d; j < n; j++) // shifting
    {
        arr[j - d] = arr[j];
    }

    for (int i = n - d; i < n; i++)
    { // combmination
        arr[i] = a[i - (n - d)];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}