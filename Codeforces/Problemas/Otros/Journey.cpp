#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

vector<vl> conexiones;

long double dfs(ll cur, ll p){
	long double sum = 0;
	for(auto &x : conexiones[cur]){
		if(x != p){
			sum += dfs(x, cur)+1;
		}
	}
	if(sum != 0){
		ll id = 0;
		if(p != -1){
			id++;
		}
		return sum/(conexiones[cur].size()-id);
	}
	return 0;
}

int main(){
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
	cout << fixed << setprecision(7) << dfs(0, -1);
	
}
