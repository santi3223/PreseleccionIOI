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

int main(){
	ll n;
	cin >> n;
	vl arr(n);
	ll sum = 0;
	ff(i, 0, n){
		cin >> arr[i];
		sum += arr[i];
	}
	if(sum % 3 != 0){
		cout << 0;
		return 0;
	}
	
	sum /= 3;
	ll s = 0;
	vl mark(n, 0);
	for(ll i = n-1; i >= 0; i--){
		s += arr[i];
		if(sum == s){
			mark[i] = 1;
		}
		if(s > sum){
			break;
		}
	}
	for(ll i = n-2; i >= 0; i--){
		mark[i] += mark[i+1];
	}
	s = 0;
	ll c = 0;
	ff(i, 0, n-2){
		s += arr[i];
		if(sum == s){
			c += mark[i+2];
		}
		if(s > sum){
			break;
		}
	}
	cout << c;
	return 0;
}
