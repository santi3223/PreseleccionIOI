#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll n, m;
	cin >> n >> m;
	ll low = (n+1)/2;
	ll c = (low+m-1)/m*m;
	if(c > n){
		c = -1;
	}
	cout << c;
	
	return 0;
}
