#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	ll n, w;
	cin >> n >> w;
	vl arr(n);
	set<ll> sec;
	ff(i, 0, n){
		cin >> arr[i];
		sec.insert(arr[i]);
		
	}
	ff(i, 0, n){
		ff(j, i+1, n){
			sec.insert(arr[i]+arr[j]);
		}
	}
	ff(i, 0, n){
		ff(j, i+1, n){
			ff(k, j+1, n){
				sec.insert(arr[i]+arr[j]+arr[k]);
			}
		}
	}
	ll pos = 0;
	for(auto &x : sec){
		if(x > w){
			break;
		}
		pos++;
	}
	cout << pos;
	
	return 0;
}
