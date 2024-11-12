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

int main(){
	IO
	ll n;
	cin >> n;
	vl arr(7);
	ff(i, 0, 7){
		cin >> arr[i];
	}
	ll i = 0;
	while(n > 0){
		n -= arr[i%7];
		i++;
	}
	if(i % 7 == 0){
		cout << 7;
		return 0;
	}
	cout << i % 7;
	
	return 0;
}
