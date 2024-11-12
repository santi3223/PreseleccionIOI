#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n;
	cin >> n;
	vl arr(n);
	vector<vl> dp(n, vl(3, INT_MAX));
	ff(i, 0, n){
		cin >> arr[i];
	}
	if(arr[0] == 0){
		dp[0][0] = 1;
	}
	else if(arr[0] == 1){
		dp[0][0] = 1;
		dp[0][2] = 0;
	}
	else if(arr[0] == 2){
		dp[0][0] = 1;
		dp[0][1] = 0;
	}
	else{
		dp[0][0] = 1; //desc
		dp[0][1] = 0; //gym
		dp[0][2] = 0; //contest
	}
	ff(i, 1, n){
		dp[i][0] = min({dp[i-1][0]+1, dp[i-1][1]+1, dp[i-1][2]+1});
		if(arr[i] == 2 || arr[i] == 3){
			dp[i][1] = min({dp[i-1][0], dp[i-1][2]});
		}
		if(arr[i] == 1 || arr[i] == 3){
			dp[i][2] = min({dp[i-1][0], dp[i-1][1]});
		}
	}
	cout << min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
	
	return 0;
}
