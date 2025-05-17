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
ll MOD = 1e9+7, MAX = 1e6;

int main(){
	ll n;
	cin >> n;
	vl arr(n), c(MAX+5);
	ll sum = 0;
	ff(i, 0, n){
		cin >> arr[i];
		sum += arr[i];
		c[arr[i]]++;
	}
	vl res;
	ff(i, 0, n){
		sum -= arr[i];
		c[arr[i]]--;
		if(sum % 2 == 0 &&  sum/2 <= MAX && c[sum/2] > 0){
			res.pb(i);
		}
		sum += arr[i];
		c[arr[i]]++;
	}
	cout << res.size() << ed;
	ff(i, 0, res.size()){
		cout << res[i]+1 << " ";
	}
	
	
	return 0;
}
