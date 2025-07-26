#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(int aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		vl seq;
		ll n = str.size();
		vector<vl> list;
		ff(i, 0, n){
			char cur = str[i];
			if(seq.empty()){
				seq.pb(cur);
				continue;
			}
			//cout << seq.back() << "  " << cur << ed;
			if('A' <= seq.back() && seq.back() <= 'Z'){
				if('A' <= cur && cur <= 'Z'){
				}
				else{
					seq.pb(cur);
				}
			}
			else if('0' <= seq.back() && seq.back() <= '9'){
				if('0' <= cur && cur <= '9'){
					
				}
				else{
					seq.pb(cur);
				}
			}
		}
		//cout << seq.size() << ed;
		if(seq.size() == 4){
			ll nums = 0;
			ll q = 1;
			for(ll i = n-1; i >= 0; i--){
				if('0' <= str[i] && str[i] <= '9'){
					nums += (str[i]-'0')*q;
					q *= 10;
				}
				else{
					break;
				}
			}
			string ans = "";
			while(nums > 0){
				nums--;
				ans = char('A'+(nums%26)) + ans;
				nums /= 26;
			}
			string r = "";
			ff(i, 1, n){
				if('0' <= str[i] && str[i] <= '9'){
					r += str[i];
				}
				else{
					break;
				}
			}
			cout << ans+r << ed;
		}
		else{
			string start = "";
			ff(i, 0, n){
				if('A'<= str[i] && str[i] <= 'Z'){
					start += str[i];
				}
				else{
					break;
				}
			}
			ll init = pow(26, start.size()-1), nums = 0;
			ff(i, 0, n){
				nums += (start[i]-'A'+1)*init;
				init /= 26;
			}
			string r = "";
			for(ll i = n-1; i >= 0; i--){
				if('0' <= str[i] && str[i] <= '9'){
					r += str[i];
				}
			}
			reverse(all(r));
			cout << "R"+r+"C" << nums << ed;
		}
	}
}
