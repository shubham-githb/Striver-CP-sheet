#include <bits/stdc++.h>
#include <math.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M_PI 3.14159265358979323846

// const int M = 1e9 + 7;
// // const int M=998244353;
// long long mod(long long x)
// {
//     return ((x % M + M) % M);
// }
// long long add(long long a, long long b)
// {
//     return mod(mod(a) + mod(b));
// }
// long long mul(long long a, long long b)
// {
//     return mod(mod(a) * mod(b));
// }

// ll modPow(ll a, ll b)
// {
//     if (b == 0)
//         return 1LL;
//     if (b == 1)
//         return a % M;
//     ll res = 1;
//     while (b)
//     {
//         if (b % 2 == 1)
//             res = mul(res, a);
//         a = mul(a, a);
//         b = b / 2;
//     }
//     return res;
// }

// void solve() {
//     int n ;
//     cin>>n;
//     int a,b,c;
//     for(a=2;a*a*a<=n;a++){
//         if(n%a==0){
//             break;
//         }
//     }
//     int rem = n/a;
//     for(b=a+1;b*b<=rem;b++){
//         if(rem%b==0){
//             int c = rem/b;
//             if(b>=c){
//                 c=0;
//             }
//             break;
//         }
//     }

//     if(a*b*c==n){
//         cout<<"YES"<<endl;
//         cout<<a<<""<<b<<""<<c<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t ;
    cin >> t;
    long long n;
    long long N;
    while(t--){
        // int n;
        cin>>n;
        N=n;
        int counter=0;
        vector<long long> arr;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                counter++;
                n=n/i;
                arr.push_back(i);
            }
            if(counter==2){
                arr.push_back(n);
                break;
            }
        }

        if(counter==2){
            arr.push_back(n);
            cout<<"NO"<<endl;
        }
        else if(arr[0]==arr[2] || arr[1]==arr[2]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<arr[0]<<""<<arr[1]<<""<<arr[2]<<endl;
        }
    }
    return 0;
}