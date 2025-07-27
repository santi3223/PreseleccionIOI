#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(int aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		string a, b;
		cin >> n >> a >> b;
		vl arr;
		ff(i, 0, n){
			if(a[i] != b[i]){
				if(i > 0){
					arr.pb(i+1);
				}
				arr.pb(1);
				if(i > 0){
					arr.pb(i+1);
				}
			}
		}
		cout << arr.size() << " ";
		ff(i, 0, arr.size()){
			cout << arr[i] << " ";
		}
		cout <<ed;
	}
}
