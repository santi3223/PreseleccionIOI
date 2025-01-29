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
		ll n;
		cin >> n;
		map<string, bool> mp;
		vs arr(n);
		ff(i, 0, n){
			string str;
			cin >> str;
			arr[i] = str;
			mp[str] = true;
		}
		ff(i, 0, n){
			bool ok = false;
			ff(j, 1, arr[i].length()){
				string a = arr[i].substr(0, j), b = arr[i].substr(j, arr[i].length()-j);
				if(mp[a] && mp[b]){
					ok = true;
					break;
				}
			}
			cout << ok;
		}
		cout << ed;
		
	}
	
	return 0;
}
