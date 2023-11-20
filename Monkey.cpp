#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x[1000000];

    for (; cin.getline(x, 1000000);)
    {
        int lwr_constant[26] = {0};
        for (long long int i = 0; i < strlen(x); i++)
        {
            if (x[i] != ' ' && x[i] >= 'a' && x[i] <= 'z')
            {
                int lwr_n = x[i] - 'a';
                lwr_constant[lwr_n] = lwr_constant[lwr_n] + 1;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < lwr_constant[i]; j++)
            {
                char keep = (char)('a' + i);
                cout << keep;
            }
        }

        cout << endl;
    }

    return 0;
}
