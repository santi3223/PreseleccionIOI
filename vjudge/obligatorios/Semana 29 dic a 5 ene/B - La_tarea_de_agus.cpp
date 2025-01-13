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
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 998244353;

vector<vl> dp, vis;
ll k;

ll calc(ll r, ll mod){
	if(r == 0 && mod == 0){
		return 1;
	}
	if(dp[r][mod] != 0){
		return dp[r][mod];
	}
	if(vis[r][mod] != 0){
		return dp[r][mod] = 2;
	}
	vis[r][mod] = 1;
	ll c = 2;
	ff(i, 0, 10){
		if(r-i >= 0){
			if(calc(r-i, (mod*10+i) % k) == 1){
				c = 1;
				break;
			}
		}
	}
	return dp[r][mod] = c;
}

int main(){
	IO
	cin >> k;
	ll maxx = 0, nk = k;
	while(nk > 0){
		maxx += nk%10;
		nk /= 10;
	}
	dp = vector<vl>(45, vl(k));
	vis = vector<vl>(45, vl(k));
	ff(i, 1, maxx){
		if(calc(i, 0) == 1){
			cout << i;
			return 0;
		}
	}
	cout << maxx;
	
	
	return 0;
}
