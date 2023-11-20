#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int *sort_it(int sz){
    int* arr = new int[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + sz, greater<int>());
    return arr;
};
int main()
{
    int input;
    cin >> input;
    int *fun = sort_it(input);
    for (int i = 0; i < input; i++)
    {
        cout << fun[i] << " ";
    }

    return 0;
}
