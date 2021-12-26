#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <limits.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

const int MX = 10000002;
bool check[MX];
bool isSpecial[MX];
vector<int> prime;

void sieve()
{
    memset(check, true, sizeof(check));
    check[0] = false;
    check[1] = false;

    for (int i = 2; i * i <= MX; i++)
    {
        if (check[i] == true)
        {
            for (int j = i * i; j < MX; j += i)
                if (check[j] == true)
                {
                    check[j] = false;
                }
        }
    }
    for (int i = 0; i < MX; i++)
    {
        if (check[i] == true)
            prime.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    sieve();
    memset(isSpecial, false, sizeof(isSpecial));
    int t, n, i, j, k, p;
    cin >> p >> t;
    while (t--)
    {
        cin >> n;
        k = 0;
        i = 0;
        // if (isSpecial[n])
        // {
        //     cout << "YES\n";
        //     continue;
        // }

        while (i < prime.size() && prime[i] <= n)
        {
            if (n % prime[i] == 0)
                k++;
            i++;
        }

        if (k >= p)
        {
            isSpecial[n] = true;
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     sieve();
//     memset(isSpecial, false, sizeof(isSpecial));
//     int p, t;
//     cin >> p;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int i = 0;
//         int count = 0;
//         if (isSpecial[n] == true)
//         {
//             cout << "YES" << endl;
//         }
//         while (i < prime.size() and prime[i] <= n)
//         {
//             if (prime[i] % n == 0)
//             {
//                 count++;
//                 i++;
//             }
//         }
//         if (count >= p)
//         {
//             isSpecial[n] = true;
//             cout << "YES" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }