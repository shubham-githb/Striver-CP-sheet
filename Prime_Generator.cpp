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

vector<int> sieve(int rootb)
{
    vector<bool> arr(rootb + 1);
    for (int i = 2; i * i <= arr.size(); i++)
    {
        if (arr[i] == false)
        {
            for (int j = i * i; j < arr.size(); j += i)
            {
                arr[j] = true;
            }
        }
    }

    vector<int> res;
    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] == false)
        {
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<bool> arr(b - a + 1);
        int rootb = sqrt(b);
        vector<int> primes = sieve(rootb);
        for (int prime : primes)
        {
            int multiple = ceil((a * 1.0) / prime);
            if (multiple == 1)
            {
                multiple++;
            }
            int indx = multiple * prime - a;
            for (int j = indx; j < arr.size(); j += prime)
            {
                arr[j] = true; // Not prime
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == false and i + a != 1)
            {
                int val = i + a;
                cout << val << endl;
            }
        }
    }
}