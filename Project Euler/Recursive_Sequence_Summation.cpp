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

unordered_map<ll, ll> memo;

ll funcion(ll x){
	if(x == 1){
		return 1;
	}
	if(memo[x] != 0){
		return memo[x];
	}
	ll c;
	if(x % 2 == 0){
		c = 2*funcion(x/2);
	}
	else{
		c = funcion(x/2) - 3*funcion(x/2+1);
	}
	memo[x] = c;
	return c;
}

int main(){
	IO
	ll n;
	cin >> n;
	cout << -funcion(n/2) + 4;
	
	return 0;
}
