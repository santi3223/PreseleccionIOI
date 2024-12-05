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

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		string str;
		cin >> str;
		string s1 = "", s2 = "";
		bool ok = false;
		ff(i, 0, n){
			if(!ok){
				if(str[i] == '2'){
					s1.pb('1');
					s2.pb('1');
				}
				else if(str[i] == '0'){
					s1.pb('0');
					s2.pb('0');
				}
				else if(str[i] == '1'){
					ok = true;
					s1.pb('1');
					s2.pb('0');
				}
			}
			else{
				s1.pb('0');
				s2.pb(str[i]);
			}
		}
		cout << s1 << ed << s2 << ed;
	}
	
	return 0;
}

