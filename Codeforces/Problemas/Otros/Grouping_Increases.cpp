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
    ll t;
    cin >> t;
    while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll a = LLONG_MAX, b = LLONG_MAX, c = 0;
		ff(i, 0, n){
			if(a > b){
				swap(a, b);
			}
			if(arr[i] <= a){
				a = arr[i];
			}
			else if(arr[i] <= b){
				b = arr[i];
			}
			else{
				a = arr[i];
				c++;
			}
		}
		cout << c << ed;
    }
	
	return 0;
}
