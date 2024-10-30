#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

int main(){
	IO
	ll n;
	cin >> n;
	vl arr(n);
	ff(i, 0, n){
		ll x;
		cin >> x;
		arr[i] = x-1;
	}
	ll p1 = 0, p2 = 0, p3 = -1, id1 = 0, id2 = 0, id3 = 0;
	ff(i, 0, n){
		p1 = arr[i];
		id1 = i;
		p2 = arr[p1];
		id2 = p1;
		p3 = arr[p2];
		id3 = p2;
		if(p1 == id2 && id1 == p3 && p2 == id3){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	
	return 0;
}
