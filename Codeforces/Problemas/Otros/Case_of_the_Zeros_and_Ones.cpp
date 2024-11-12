#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	ll a = 0, b = 0;
	ff(i, 0, n){
		char x;
		cin >> x;
		if(x == '1'){
			b++;
		}
		else{
			a++;
		}
	}
	cout << abs(a-b);
	
	return 0;
}
