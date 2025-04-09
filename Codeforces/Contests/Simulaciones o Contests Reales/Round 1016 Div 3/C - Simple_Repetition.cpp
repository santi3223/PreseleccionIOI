#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

bool esprim(ll x){
	if(x < 2) return false;
	if(x % 2 == 0){
		if(x == 2){
			return true;
		}
		else{
			return false;
		}
	}
	for(ll i = 3; i*i <= x; i+= 2){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll x, k;
		cin >> x >> k;
		if(k == 1){
			if(esprim(x)){
				cout << "YES";
			}
			else{
				cout << "NO";
			}
		}
		else{
			if(x != 1){
				cout << "NO";
			}
			else{
				ll cur = 0;
				ff(i, 0, k){
					cur = cur*10+1;
				}
				if(esprim(cur)){
					cout << "YES";
				}
				else{
					cout << "NO";
				}
			}
		}
		cout << ed;
		
	}	
		

	return 0;
}
