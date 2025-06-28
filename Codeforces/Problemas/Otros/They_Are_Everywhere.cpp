#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	ll n;
	cin >> n;
	string str;
	cin >> str;
	unordered_set<char> letras;
	ff(i, 0, n){
		letras.insert(str[i]);
	}
	ll minn = n, l = 0;
	unordered_map<char, ll> cur;
	ff(r, 0, n){
		cur[str[r]]++;
		while(l+1 <= r && cur[str[l]] > 1){
			cur[str[l]]--;
			l++;
		}
		if(cur.size() == letras.size()){
			minn = min(minn, r-l+1);
		}
	}
	cout << minn << ed;
}
