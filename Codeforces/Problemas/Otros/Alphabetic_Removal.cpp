#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define vb vector<bool>
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	vb ok(str.size(), true);
	for(char c = 'a'; c <= 'z'; c++){
		ff(i, 0, n){
			if(k <= 0){
				break;
			}
			if(str[i] == c){
				ok[i] = 0;
				k--;
			}
		}
		if(k <= 0){
			break;
		}
	}
	string ans = "";
	ff(i, 0, n){
		if(ok[i]){
			ans += str[i];
		}
	}
	cout << ans;
}
 
