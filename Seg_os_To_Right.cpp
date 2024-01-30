#include<bits/stdc++.h> 
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void seg0Right(int arr[], int n)
{
    int curr = 0, pos = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[curr] > 0 || arr[pos] > 0)
        {
            curr++;
            pos++;
        }
        if (arr[curr] == 0)
        {
            pos++;
            if (arr[pos] > 0)
            {
                swap(arr[curr], arr[pos]);
                curr++;
            }
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
    seg0Right(arr, n);
    return 0;
}