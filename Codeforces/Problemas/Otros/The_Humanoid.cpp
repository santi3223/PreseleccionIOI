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

//Human versus humanoid, who's the faster rapper?

vl arr;
ll funcion(ll i, ll power, ll k2, ll k3){
	if(i == arr.size()){
		return 0;
	}
	if(arr[i] < power){
		return funcion(i+1, power+(arr[i]/2), k2, k3)+1;
	}
	ll v1 = 0, v2 = 0;
	if(k2 != 0){
		v1 = funcion(i, power*2, k2-1, k3);
	}
	if(k3 != 0){
		v2 = funcion(i, power*3, k2, k3-1);
	}
	return max(v1, v2);
}

int main(){
    IO
    ll t;
    cin >> t;
    while(t--){
		ll n, h;
		cin >> n >> h;
		arr = vl(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		sort(all(arr));
		if(h*2*2*3 <= arr[0]){
			cout << 0 << ed;
			continue;
		}
		cout << funcion(0, h, 2, 1) << ed;
		
    }
    
    return 0;
}

