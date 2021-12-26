#include<bits/stdc++.h>
#include <limits>
using namespace std;
typedef long long ll;
// int a[N] = {0};
ll n,m,s,a;
int main() {
    
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a;
        s+=a;
        m = max(m,a);
    }

    if(s%2==1 || s<2*m){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll n, m, a, s;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin>>n;
//     for (ll i=1; i<=n; i++)
//     {
//         cin>>a;
//         s+=a;
//         m=max(m, a);
//     }
//     if (s%2==1 || s<2*m)
//     {
//         cout<<"NO";
//         return 0;
//     }
//     cout<<"YES";
//     return 0;
// }
