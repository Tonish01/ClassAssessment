#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void wave(int arr[], int n)
{
    int cur = 0, pos = 1;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 2; i++)
        {
            swap(arr[cur], arr[pos]);
            cur += 2;
            pos += 2;
        }
    }
    else
    {
        for (int i = 0; i < n - 3; i++)
        {
            swap(arr[cur], arr[pos]);
            cur += 2;
            pos += 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (auto a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
    wave(arr, n);
    return 0;
}