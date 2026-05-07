#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n ; 
    int arr[n-1];
    int fake =0 ;
    for (int  i = 0; i <n-1; i++)
    {
        cin >>arr[i];
        fake+=arr[i];
    }
    int sum = (n*(n+1))/2;
cout<<endl;
    cout<<sum-fake;
    return 0;
}