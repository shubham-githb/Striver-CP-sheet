#include<iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;
ll a[N] = {0};

// int kadanes(vector<long long> a){
//     int size = a.size();
//      int max_so_far = a[0];
//    int curr_max = a[0];
 
//    for (int i = 1; i < size; i++)
//    {
//         curr_max = max(a[i], curr_max+a[i]);
//         max_so_far = max(max_so_far, curr_max);
//    }
//    return max_so_far;
// }

// void solve() {
//     int n ;
//     cin>>n;
//     vector<long long> arr;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ysum =0;
//     // int asum =0;
//     for(int i=0;i<n;i++){
//         ysum = ysum + arr[i];
//     }
//     int asum = kadanes(arr); 
//     if(ysum>asum){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }

// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        int n ;
        cin>>n;
        string s = "YES";
        // vector<int> arr;
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum = sum + a[i];
        }
        int ans =0;
        for(int i=0;i<n;i++){
            ans+=a[i];
            if(ans>=sum and i!=n-1){
                s="NO";
                break;
            }
        }

        ans =0;

        for(int i=n-1;i>=0;i--){
            ans += a[i];
            if(ans>=sum and i!=0){
                s="NO";
                break;
            }
        }

         cout << s <<endl;
    
    }
}