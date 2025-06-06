#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

ll fun(const string &str, char c){
	if(str.size() == 1){
		return str[0] != c;
	}
	ll mid = str.size()/2;
	ll cl = fun(string(str.begin(), str.begin()+mid), c+1);
	cl += str.size()/2-count(str.begin()+mid, str.end(), c);
	ll cr = fun(string(str.begin()+mid, str.end()), c+1);
	cr += str.size()/2-count(str.begin(), str.begin()+mid, c);
	return min(cl, cr);
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		string str;
		cin >> n >> str;
		cout << fun(str, 'a') << ed;
	}
}
