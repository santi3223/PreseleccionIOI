#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

ll primo(ll x){
	ff(i, 2, x){
		if(x % i == 0){
			return i;
		}
	}
	return -1;
}

int main(){
	IO
	vl primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		vb used(11, false);
		ff(i, 0, n){
			cin >> arr[i];
			ll x = find(all(primos), primo(arr[i])) - primos.begin();
			used[x] = true;
		}
		
		ll c = 1;
		vl num(11);
		ff(i, 0, 11){
			num[i] = c;
			if(used[i]){
				c++;
			}
		}
		cout << c-1 << ed;
		
		ff(i, 0, n){
			ll x = find(all(primos), primo(arr[i])) - primos.begin();
			cout << num[x] << " ";
		}
		cout << ed;
	}
	
	return 0;
}
//mi checker estaba mal en la simulación :[
