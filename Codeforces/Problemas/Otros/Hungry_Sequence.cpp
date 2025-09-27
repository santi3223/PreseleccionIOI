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
ll MOD = 1e9+7;

vl primes;
vb visited;

void init(){
	visited[0] = true;
	visited[1] = true;
	ff(i, 2, 1e7){
		if(visited[i]){
			continue;
		}
		primes.pb(i);
		visited[i] = true;
		for(ll j = i*i; j < 1e7; j += i){
			visited[j] = true;
		}
		
	}
}

int main(){
	ll n;
	cin >> n;
	visited = vb(1e7, false);
	init();
	ff(i, 0, n){
		cout << primes[i] << " ";
	}

}
