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
ll N = 1e6+5;

int main(){
	IO
	ll n, k, q;
	cin >> n >> k >> q;
	vl arr(k+1, 0);
	ff(i, 0, k){
		cin >> arr[i];
	}
	while(q--){
		ll x;
		cin >> x;
		x--;
		if(arr[x]+1 != n+1 && arr[x]+1 != arr[x+1]){
			arr[x]++;
		}
	}
	ff(i, 0, k){
		cout << arr[i] << " ";
	}
	
}
