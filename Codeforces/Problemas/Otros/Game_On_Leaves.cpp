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

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, x;
		cin >> n >> x;
		vl arr(n);
		ff(i, 0, n-1){
			ll a, b;
			cin >> a >> b;
			a--;
			b--;
			arr[a]++;
			arr[b]++;
		}
		if(arr[x-1] <= 1){
			cout << "Ayush" << ed;
		}
		else{
			if(n % 2 != 0){
				cout << "Ashish" << ed;
			}
			else{
				cout << "Ayush" << ed;
			}
		}
	}
	return 0;
}
