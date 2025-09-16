#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		str = '0'+str;
		int sz = str.size();
		for(ll i = str.size()-1; i >= 0; i--){
			if(str[i] > '5'){
				str[i-1]++;
				sz = i;
			}
		}
		for(ll i = (str[0] == '0'); i < str.size(); i++){
			cout << (i >= sz ? '0' : str[i]);
		}
		cout << ed;
	}

}
