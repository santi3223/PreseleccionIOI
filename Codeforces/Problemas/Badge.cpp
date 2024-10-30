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

vl arr;
vb visited;
void solve(ll start){
	if(visited[start] == true){
		cout << start+1 << " ";
		return;
	}
	visited[start] = true;
	ll x = arr[start];
	solve(x);
}

int main(){
	IO
	ll n;
	cin >> n;
	arr = vl(n);
	ff(i, 0, n){
		ll x;
		cin >> x;
		arr[i] = x-1;
	}
	ff(i, 0, n){
		visited = vb(n, false);
		solve(i);
	}


	
	
	return 0;
}
