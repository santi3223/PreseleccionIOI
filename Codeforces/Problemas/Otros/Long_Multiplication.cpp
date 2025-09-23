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
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		ll n = a.size();
		bool dif = false;
		ff(i, 0, n){
			if(dif == false){
				if(a[i] == b[i]){
					continue;
				}
				else{
					dif = true;
					if(a[i] < b[i]){
						swap(a[i], b[i]);
					}
				}
			}
			else{
				if(a[i] > b[i]){
					swap(a[i], b[i]);
				}
			}
		}
		cout << a << ed << b << ed;
	}

}
