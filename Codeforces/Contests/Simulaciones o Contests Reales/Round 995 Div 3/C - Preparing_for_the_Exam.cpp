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

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n, m, k;
		cin >> n >> m >> k;
		vl arr(m), brr(k);
		ff(i, 0, m){
			cin >> arr[i];
		}
		map<ll, bool> mp;
		ff(i, 0, k){
			cin >> brr[i];
			mp[brr[i]] = true;
		}
		
		if(k+2 <= n){
			string x(m, '0');
			cout << x << ed;
			continue;
		}
		if(n == k){
			string x(m, '1');
			cout << x << ed;
			continue;
		}
		sort(all(brr));
		string str(m, '0');
		
		ff(i, 0, m){
			if(mp[arr[i]] != true){
				str[i] = '1';
				break;
			}
		}
		
		cout << str << ed;
	}
	
	return 0;
}
