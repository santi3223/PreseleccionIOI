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
	string str;
	cin >> str;
	ll n = str.size();
	unordered_map<char, ll> mp;
	ff(i, 0, n){
		mp[str[i]]++;
	}
	ll c = 0;
	for(auto &p : mp){
		if(p.se % 2 != 0){
			c++;
		}
	}
	if(c <= 1){
		cout << "First";
	}
	else{
		if(c % 2 == 0){
			cout << "Second";
		}
		else{
			cout << "First";
		}
	}
	
	return 0;
}
