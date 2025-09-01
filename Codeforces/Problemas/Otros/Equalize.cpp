#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

int main(){
	ll n;
	string a, b;
	cin >> n >> a >> b;
	ll c = 0;
	ff(i, 0, n){
		if(a[i] == b[i]){
			continue;
		}
		if(i+1 < n && a[i] == b[i+1] && a[i+1] == b[i]){
			swap(a[i], a[i+1]);
			c++;
		}
		else{
			a[i] = b[i];
			c++;
		}
	}
	//cout << a << ed << b << ed;
	cout << c;
	
}
