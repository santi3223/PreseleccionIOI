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
	string str;
	cin >> str;
	ll n = str.length();
	map<string, ll> mp;
	ff(i, 0, n){
		if(str[i] != '4' && str[i] != '7'){
			continue;
		}
		string cur = "";
		cur += str[i];
		mp[cur]++;
		ff(j, i+1, n){
			if(str[j] != '4' && str[j] != '7'){
				break;
			}
			cur += str[j];
			mp[cur]++;
		}
	}
	vs strings;
	ll cur = 0;
	for(auto &p : mp){
		if(p.se > cur){
			cur = p.se;
			strings.clear();
		}
		strings.pb(p.fi);
	}
	sort(all(strings));
	if(strings.size() == 0){
		cout << -1;
		return 0;
	}
	cout << strings[0];
	
	return 0;
}
