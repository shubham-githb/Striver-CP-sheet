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

const int N = 100000;
int n, a[N];
ll s;

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int r = n;
    int m;
    int k = 0;
    ll cost = 0;
    while (l <= r)
    {
        m = (l + r) / 2;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a[i] + (i + 1) * m);
        }
        sort(v.begin(), v.end());
        ll c = 0;
        for (int i = 0; i < m; i++)
        {
            c += v[i];
        }
        if (c <= s)
        {
            k = m;
            cost = c;
            l = m + 1;
        }
        else
            r = m - 1;
    }

    cout << k << " " << cost << endl;
    return 0;
}