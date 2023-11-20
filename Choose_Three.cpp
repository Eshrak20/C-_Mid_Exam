#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int a = 0; a < x; a++)
    {
        int m, eql;
        cin >> m;
        cin >> eql;
        int sum = 0;
        int flag = 1;

        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = i + 1; j < m; j++)
            {
                int bk = arr[i] + arr[j];

                for (int k = j + 1; k < m; k++)
                {
                    sum = bk + arr[k];
                    if (sum == eql)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}