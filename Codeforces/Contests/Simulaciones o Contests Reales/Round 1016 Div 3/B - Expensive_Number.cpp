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

int main(){
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		ll maxx = 0, c = 0, n = str.size();
		ff(i, 0, n){
			if(str[i] == '0'){
				c++;
			}
			else{
				maxx = max(maxx, c+1);
			}
		}
		cout << n-maxx << ed;
		
	}	
		

	return 0;
}
