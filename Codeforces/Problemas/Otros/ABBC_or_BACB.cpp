#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll n = s.length();
		bool all = (s[0] == 'B' || s[n - 1] == 'B');
		ff(i, 0, n-1){
			if(s[i] == s[i + 1] && s[i] == 'B') {
				all = true;
			}
		}
		vl lens;
		ll curr = 0;
		ff(i, 0, n){
			if(s[i] == 'A'){
				curr++;
			}
			else{
				if(curr != 0){
					lens.push_back(curr);
				}
				curr = 0;
			}
		}
		if(curr != 0){
			lens.push_back(curr);
		}
		sort(all(lens));
		
		if(lens.empty()){
			cout << 0 << '\n';
			continue;
		
		}
		
		ll tot = 0;
		if(all){
			tot += lens[0];
		}
		ff(i, 1, lens.size()){
			tot += lens[i];
		}
		cout << tot << '\n';
	}
	
}
