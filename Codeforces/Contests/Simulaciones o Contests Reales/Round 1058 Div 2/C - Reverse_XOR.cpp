#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back
#define vb vector<bool>
ll MOD = 1e9+7;


string decToBinary(int n) {
    
    string bin = "";
    while (n > 0) {
        // checking the mod 
		int bit = n%2;
      	bin.push_back('0' + bit);
        n /= 2;
    }
    
    // reverse the string 
	reverse(bin.begin(), bin.end());
    return bin;
}
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		string str = decToBinary(n);
		ll j = str.size()-1;
		for(ll i = str.size()-1; i >= 0; i--){
			if(str[i] == '1'){
				j = i;
				break;
			}
		}
		bool ok = true;
		ll i = 0;
		//cout << n << " " << str << " " << str.size() << ed;
		//cout << "I" << i << " " << j << ed;
		while(i < j){
			//cout << i << " " << j << ed;
			if(str[i] != str[j]){
				ok = false;
				break;
			}
			i++;
			j--;
		}
		if(i == j && str[i] == '1'){
			ok = false;
		}
		if(n == 0){
			cout << "YES" << ed;
		}
		else if(ok){
			cout << "YES" << ed;
		}
		else{
			cout << "NO" << ed;
		}
	}
 
}
 
