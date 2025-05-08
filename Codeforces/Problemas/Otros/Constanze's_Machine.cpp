#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

int main(){
	string str;
	cin >> str;
	ll n = str.size();
	ll cur = 1;
		
	vl fib(n+1);
	fib[0] = fib[1] = 1;
	ff(i, 2, n+1){
		fib[i] += fib[i-1]+fib[i-2];
		if(fib[i] >= MOD){
			fib[i] -= MOD;
		}
	}
	
	bool ok = true;
	ll i = 0;
	while(i < n){
		if(str[i] == 'w' || str[i] == 'm'){
			ok = false;
			break;
		}
		ll j = i;
		while(str[i] == str[j] && j < n){
			j++;
		}
		ll p = j-i;
		if(str[i] == 'u' || str[i] == 'n'){
			cur = (cur * fib[p]) % MOD;
			i = j;
		}
		else{
			i++;
		}
	}
	if(!ok){
		cout << 0;
		return 0;
	}
	cout << cur;
	
	return 0;
}
