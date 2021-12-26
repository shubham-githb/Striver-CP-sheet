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

const int n = 200;
vector<int> prime;
vector<char> check(n + 1, true);
vector<int> semi;

int main()
{
    check[0] = check[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                check[j] = false;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (check[i] == true)
        {
            prime.push_back(i);
        }
    }

    for (int i = 0; i < prime.size(); i++)
    {
        for (int j = i + 1; j < prime.size(); j++)
        {
            if (i != j)
                semi.push_back(prime[i] * prime[j]);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 0; i < semi.size(); i++)
        {
            for (int j = 0; j < semi.size(); j++)
            {
                if ((semi[i] + semi[j]) == n)
                    flag = 1;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// #include <cmath>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <stack>
// #include <string>
// #include <sstream>
// #include <iterator>
// #include <map>
// #include <array>
// #include <numeric>
// using namespace std;
// const int N = 200;
// vector<int> primes;
// vector<char> check(N + 1, true);
// vector<int> semi;
// int main()
// {
//     check[0] = check[1] = false;
//     for (int i = 2; i * i <= N; i++)
//     {
//         if (check[i])
//         {
//             for (int j = 2 * i; j < N; j += i)
//                 check[j] = false;
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (check[i] == true)
//             primes.push_back(i);
//     }
//     for (int i = 0; i < primes.size(); i++)
//     {
//         for (int j = i + 1; j < primes.size(); j++)
//         {
//             if (i != j)
//                 semi.push_back(primes[i] * primes[j]);
//         }
//     }

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         bool p = false;
//         for (int i = 0; i < semi.size(); i++)
//         {
//             for (int j = 0; j < semi.size(); j++)
//             {
//                 if ((semi[i] + semi[j]) == n)
//                     p = true;
//             }
//         }
//         if (p == true)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }