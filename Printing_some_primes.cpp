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

typedef long long ll;
typedef unsigned long long ull;
const int N = 1e8;
vector<char> isPrime(N + 1, true);
vector<int> prime;

int main()
{
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * 2; j <= N; j += i)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            prime.push_back(i);
        }
    }

    for (int i = 1; i < prime.size(); i += 100)
    {
        cout << prime[i - 1] << endl;
    }

    return 0;
}