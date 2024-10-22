#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
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
	vs cola;
	cola.pb("Sheldon"); cola.pb("Leonard"); cola.pb("Penny");
	cola.pb("Rajesh"); cola.pb("Howard");
	n--;
	while(n >= 5){
		n-= 5;
		n /= 2;
	}
	cout << cola[n];
	
	return 0;
}
