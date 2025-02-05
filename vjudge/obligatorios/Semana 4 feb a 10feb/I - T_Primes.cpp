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

vb prim;

void sieve(ll x){
	prim = vb(x+1, true);
	prim[0] = prim[1] = false;
	for(ll i = 2; i*i <= x; i++){
		if(prim[i]){
			for(ll j = i*i; j <= x; j += i){
				prim[j] = false;
			}
		}
	}
	
}

int main(){
	IO
	ll n;
	cin >> n;
	sieve(1000000);
	while(n--){
		ll x;
		cin >> x;
		ll sq = sqrt(x);
		if(prim[sq] && sq*sq == x){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
	
	return 0;
}
