#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
ll MOD = 1e9+7;

int main(){
	ll n, s;
	cin >> n >> s;
	if(2*n <= s){
		cout << "YES" << ed;
		ff(i, 0, n-1){
			cout << 2 << " ";
			s -= 2;
		}
		cout << s << ed << 1;
	}
	else{
		cout << "NO";
	}
}

