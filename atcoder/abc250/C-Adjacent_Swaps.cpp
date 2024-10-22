#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll n, q;
	cin >> n >> q;
	vl arr(n+1);
	map<ll, ll> pos;
	ff(i, 0, n+1){
		arr[i] = i;
		pos[arr[i]] = i;
	}
	while(q--){
		ll x;
		cin >> x;
		ll posicion = pos[x];
		if(posicion != n){
			pos[arr[posicion]]++;
			pos[arr[posicion+1]]--;
			swap(arr[posicion], arr[posicion+1]);
		}
		else{
			pos[arr[posicion]]--;
			pos[arr[posicion-1]]++;
			swap(arr[posicion], arr[posicion-1]);
		}
	}
	ff(i, 1, n+1){
		cout << arr[i] << " ";
	}
	
	return 0;
}
