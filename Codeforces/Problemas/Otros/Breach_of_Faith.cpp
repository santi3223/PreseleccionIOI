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
		ll n;
		cin >> n;
		vl arr(2*n);
		ff(i, 0, 2*n){
			cin >> arr[i];
		}
		sort(all(arr));
		vl p(2*n+1);
		ll sum = 0;
		ff(i, 0, n+1){
			p[2*i] = arr[n+i-1];
			sum += p[2*i];
		}
		ff(i, 0, n-1){
			p[2*i+1] = arr[i];
			sum -= p[2*i+1];
		}
		p[2*n-1] = sum;
		ff(i, 0, p.size()){
			cout << p[i] << " ";
		}
		cout << ed;
	}
	
	return 0;
}
