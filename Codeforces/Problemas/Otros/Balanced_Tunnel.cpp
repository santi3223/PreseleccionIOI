#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll n;
	cin >> n;
	vl arr(n), brr(n);
	ff(i, 0, n){
		cin >> arr[i];
		arr[i]--;
	}
	ff(i, 0, n){
		cin >> brr[i];
		brr[i]--;
	}
	vl pos(n);
	ff(i, 0, n){
		pos[brr[i]] = i;
	}
	vl c(n);
	ff(i, 0, n){
		c[i] = pos[arr[i]];
	}
	ll maxx = -1, ans = 0;
	ff(i, 0, n){
		if(c[i] > maxx){
			maxx = c[i];
		}
		else{
			ans++;
		}
	}
	cout << ans;
	
}
