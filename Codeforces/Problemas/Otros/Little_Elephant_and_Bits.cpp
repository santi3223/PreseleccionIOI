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
 
int main(){
	IO
	string str;
	cin >> str;
	ll n = str.size();
	ll p = -1;
	ff(i, 0, n){
		if(str[i] == '0'){
			p = i;
			break;
		}
	}
	if(p == -1){
		str.pop_back();
	}
	else{
		string aux = str.substr(0, p);
		aux += str.substr(p+1, n);
		str = aux;
	}
	cout << str;
	
    return 0;
}
