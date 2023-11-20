#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    int arr[input];
    for (int i = 0; i < input; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + input);
    for (int i = 0; i < input; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + input, greater<int>());
    for (int i = 0; i < input; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
