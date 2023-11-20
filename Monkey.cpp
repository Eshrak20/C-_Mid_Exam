// #include <stdio.h>
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     char x[100];
//     char y[100];

//     cin >> x;
//     getchar();
//     cin.getline(y, 100);

//     for (size_t i = 0; i < strlen(x); i++)
//     {
//         x[i];
//     }
//     sort(x, x + strlen(x));
//     cout << x;
//     cout << endl;
//     for (size_t i = 0; i < strlen(y); i++)
//     {
//         y[i];
//     }
//     sort(y, y + strlen(y));
//     for (size_t i = 0; i < strlen(y); i++)
//     {
//         if (y[i] != ' ')
//         {
//             cout << y[i];
//         }
//     }

//     return 0;
// }

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x[1000000];

    while (cin.getline(x, 1000000))
    {
        sort(x, x + strlen(x));

        for (long long int i = 0; i < strlen(x); i++)
        {
            if (x[i] != ' ' && x[i] >= 'a' && x[i] <= 'z')
            {
                cout << x[i];
            }
        }

        cout << endl;
    }

    return 0;
}

