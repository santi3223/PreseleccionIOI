#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

ll sum(ll n){
	if(n <= 0){
		return 0;
	}
	ll res = 0, f = 1;
	while(f <= n){
		ll hi = n/(f*10);
		ll cur = (n/f)%10;
		ll lo = n%f;
		res += hi*45*f;
		res += (cur*(cur-1)/2)*f;
		res += cur * (lo+1);
		f *= 10;
	}
	return res;
}

ll range(ll l, ll r){
	if(l > r){
		return 0;
	}
	return sum(r)-sum(l-1);
}

ll poww(ll b, ll e){
	if(e == 0){
		return 1;
	}
	if(e == 1){
		return b;
	}
	ll mid = poww(b, e/2);
	if(e % 2 == 0){
		return mid*mid;
	}
	return mid*mid*b;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll k;
		cin >> k;
		ll res = 0;
		ll d = 1;
		while(true){
			ll c = 9*poww(10, d-1);
			ll block = c*d;
			if(k >= block){
				res += range(poww(10, d-1), poww(10, d)-1);
				k -= block;
			}
			else{
				ll full = k/d;
				ll rem = k%d;
				ll st = poww(10, d-1);
				if(full > 0){
					res += range(st, st+full-1);
				}
				if(rem > 0){
					string str = to_string(st+full);
					ff(i, 0, rem){
						res += str[i]-'0';
					}
				}
				break;
			}
			d++;
		}
		cout << res << ed;
	}
}
