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

const int n = 100001;
// bool prime[mx];
int kprime[n] = {0};

void sieve()
{
    for (int p = 2; p < n; p++)
    {
        if (kprime[p] == 0)
        {
            for (int i = p; i < n; i += p)
            {
                kprime[i]++;
            }
        }
    }
}

int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (kprime[i] == k)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}