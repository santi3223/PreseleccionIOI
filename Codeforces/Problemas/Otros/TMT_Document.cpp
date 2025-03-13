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
	ll tt;
	cin >> tt;
	while(tt--){
		ll n;
		string str;
		cin >> n >> str;
		vl t, m;
		ff(i, 0, n){
			if(str[i] == 'T'){
				t.pb(i);
			}
			else{
				m.pb(i);
			}
		}
		if(t.size() != m.size()*2){
			cout << "NO" << ed;
			continue;
		}
		bool ok = true;
		ff(i, 0, m.size()){
			if(m[i] < t[i] || m[i] > t[i+m.size()]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
	}
	
	return 0;
}

