#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    int l = 0;
    for (int i = 1; i < n; i++)
    {
        swap(arr[l], arr[i]);
        l++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}