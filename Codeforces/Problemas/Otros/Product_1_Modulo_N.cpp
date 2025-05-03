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
	ll n;
	cin >> n;
	vb ok(n+5, false);
	ll p = 1, c = 0;
	ff(i, 1, n){
		if(gcd(i, n) == 1){
			ok[i] = true;
			c++;
			p = (p*i)%n;
		}
	}
	if(p != 1){
		c--;
		ok[p] = false;
	}
	cout << count(all(ok), 1) << ed;
	ff(i, 1, n){
		if(ok[i]){
			cout << i << " ";
		}
	}
	
	
	
	return 0;
}
