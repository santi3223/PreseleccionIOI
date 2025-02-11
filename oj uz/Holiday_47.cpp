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

ll findMaxAttraction(int n, int start, int d, int attraction[]){
	ll maxx = 0;
	for(ll l = start; l >= 0; l--){
		priority_queue<ll> qq;
		ll c = 0;
		ff(r, l, n){
			qq.push(-attraction[r]);
			c += attraction[r];
			if(r < start){
				continue;
			}
			ll habi = d-min(start-2*l+r, 2*r-start-l);
			if(habi <= 0){
				break;
			}
			while(qq.size() > habi){
				//restando los menores q.size()-habi elementos de c
				c += qq.top();
				qq.pop();
			}
			maxx = max(maxx, c);
		}
	}
	return maxx;
}
//gracias agus

/*
int main(){
	IO
	int n, s, d;
	cin >> n >> s >> d;
	int attraction[n];
	ff(i, 0, n){
		cin >> attraction[i];
	}
	cout << findMaxAttraction(n, s, d, attraction);
	
	return 0;
}
*/
