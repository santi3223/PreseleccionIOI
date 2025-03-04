#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

vb primo;
void sieve(){
	primo = vb(1e8+10, true);
	primo[0] = primo[1] = false;
	ff(i, 2, 1e8+2){
		if(primo[i]){
			for(ll j = i*i; j < 1e8+2; j += i){
				primo[j] = false;
			}
		}
	}
}

bool check(ll n, ll d){
	if(primo[d+n/d]){
		return true;
	}
	return false;
}

int main(){
	IO
	sieve();
	ll c = 0;
	ff(num, 1, 1e8){
		bool ok = true;
		for(ll i = 1; i*i <= num; i++){
			if(num % i == 0){
				if(!check(num, i)){
					ok = false;
				}
				if(num % (num/i) == 0){
					if(!check(num, i)){
						ok = false;
					}
				}
			}
			if(!ok){
				break;
			}
		}
		if(ok){
			//cout << num << " ";
			c += num;
		}
	}
	//cout << ed;
	cout << c;
	
	return 0;
}
