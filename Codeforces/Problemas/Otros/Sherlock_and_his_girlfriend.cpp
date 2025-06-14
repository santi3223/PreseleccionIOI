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

vector<bool> sieve(1e6+5, false);

int main(){
	ll n;
	cin >> n;
	ff(i, 2, n+2){
		if(!sieve[i]){
			for(ll j = 2*i; j <= n+1; j += i){
				sieve[j] = 1;
			}
		}
	}
	if(n > 2){
		cout << 2 << ed;
	}
	else{
		cout << 1 << ed;
	}
	ff(i, 2, n+2){
		if(!sieve[i]){
			cout << "1 ";
		}
		else{
			cout << "2 ";
		}
	}
}
