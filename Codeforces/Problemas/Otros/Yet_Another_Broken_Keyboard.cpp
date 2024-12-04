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
	ll n, k;
	string str;
	cin >> n >> k >> str;
	vc ch(k);
	ff(i, 0, k){
		cin >> ch[i];
	}
	ll cur = 0, c = 0;
	bool found = false;
	ff(i, 0, n){
		for(auto &p : ch){
			if(p == str[i]){
				found = true;
				break;
			}
		}
		if(found){
			cur++;
			found = false;
		}
		else{
			c += ((cur*(cur+1))/2);
			cur = 0;
		}
	}
	c += ((cur*(cur+1))/2);
	cout << c;
	
	return 0;
}
