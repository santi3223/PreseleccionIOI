#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;
 
int main(){
	IO
    ll n;
    cin >> n;
    vl arr(n), brr(n);
    ff(i, 0, n){
        cin >> arr[i];
    }
    ff(i, 0, n){
        cin >> brr[i];
    }
    vector<vl> dp(n, vl(3));
    dp[0][0] = arr[0];
    dp[0][1] = brr[0];
    dp[0][2] = 0;
    ff(i, 1, n){
        dp[i][0] = max({dp[i-1][1]+arr[i], dp[i-1][2] + arr[i], arr[i]});
        dp[i][1] = max({dp[i-1][0]+brr[i], dp[i-1][2] + brr[i], brr[i]});
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]);
    }
	cout << max(dp[n-1][0], dp[n-1][1]);
	
    return 0;
}
