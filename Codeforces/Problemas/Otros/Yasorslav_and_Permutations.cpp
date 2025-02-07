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
	unordered_map<ll, ll> mp;
	ll n;
	cin >> n;
	ff(i, 0, n){
		ll x;
		cin >> x;
		mp[x]++;
		if(mp[x] > (n+1)/2){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	
	return 0;
}
