#include <bits/stdc++.h>
using namespace std;
#define ll int
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		string arr;
		cin >> n >> arr;
		ll maxx = 0;
		map<char, ll> c;
		ff(i, 0, n){
			c[arr[i]]++;
			if(c[arr[i]] > maxx){
				maxx = c[arr[i]];
			}
		}
		//if(n % 2 == 0){
		if(maxx > n/2){
			cout << maxx-(n-maxx);
		}
		else{
			cout << (n % 2 == 0 ? 0 : 1);
		}
		cout << ed;
		//}
	}
}
