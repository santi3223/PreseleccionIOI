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
ll MOD = 1e9+7; 

vector<vl> conexiones;
vb vis;

ll dfs(ll cur, ll mid){
	vis[cur] = true;
	ll x = mid;
	ff(i, 0, conexiones[cur].size()){
		if(vis[conexiones[cur][i]] == true){
			continue;
		}
		vis[conexiones[cur][i]] = true;
		x += dfs(conexiones[cur][i], mid)-1;
	}
	return min(0LL, x);
}

int main(){ 
	IO
	ll n;
	cin >> n;
	conexiones = vector<vl>(n);
	ff(i, 0, n-1){
		ll a, b;
		cin >> a >> b;
		a--;
		b--;
		conexiones[a].pb(b);
		conexiones[b].pb(a);
	}
	ll l = 0, r = LLONG_MAX, c = 0;
	while(l <= r){
		ll mid = l + (r-l)/2;
		vis = vb(n, 0);
		if(dfs(0, mid) == 0){
			r = mid-1;
			c = mid;
		}
		else{
			l = mid+1;
		}
	}
	cout << c;
	
	return 0; 
}
//aguss carry
