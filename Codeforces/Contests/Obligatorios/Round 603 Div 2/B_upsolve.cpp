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
		map<string, ll> mp;
		ll c = 0;
		vs save(n);
		ff(i, 0, n){
			cin >> save[i];
			mp[save[i]]++;
		}
		ff(i, 0, n){
			if(mp[save[i]] == 1){
				continue;
			}
			c++;
			mp[save[i]]--;
			ff(j, 0, 10){
				save[i][0] = j + '0';
				if(mp[save[i]] == 0){
					mp[save[i]]++;
					break;
				}
			}
		}
		cout << c << ed;
		ff(i, 0, n){
			cout << save[i] << ed;
		}
	}
	return 0;
}
