#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()	
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

int main(){
	ll n, m, k;
	cin >> n >> m >> k;
	vl arr(m);
	ll suma = 0;
	ff(i, 0, n){
		ll x;
		cin >> x;
		suma += x;
	}
	ff(i, 0, m){
		cin >> arr[i];
	}
	vb dp(1e6);
	dp[0] = 1;
	ff(i, 0, m){
		for(ll j = 1e6-1; j >= 0; j--){
			if(dp[j] == 1 && j+arr[i] < 1e6){
				dp[j+arr[i]] = 1;
			}
		}
	}
	ll x = LLONG_MIN;
	ff(i, suma, 1e6){
		if(dp[i] == 1){
			x = i-suma;
			break;
		}
	}
	if(x < 0){
		cout << "Impossible";
	}
	else{
		cout << x;
	}
	
	
	return 0;
}
