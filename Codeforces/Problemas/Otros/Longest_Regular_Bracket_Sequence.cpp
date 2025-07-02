#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 998244353;

int main(){
	string str;
	cin >> str;
	stack<ll> arr;
	ll n = str.size();
	ll maxx = 0, q = 1, last = -1;
	ff(i, 0, n){
		if(str[i] == '('){
			arr.push(i);
		}
		else{
			if(!arr.empty()){
				arr.pop();
				ll len = i-last;
				if(!arr.empty()){
					len = i-arr.top();
				}
				if(len > maxx){
					maxx = len;
					q = 1;
				}
				else if(len == maxx){
					q++;
				}
			}
			else{
				last = i;
			}
		}
	}
	cout << maxx << " " << q;
}
