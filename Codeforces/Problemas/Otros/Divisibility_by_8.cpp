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

string str;
bool ok = false;
ll val = 0, n;

void brute(ll i, string cur, ll last){
	if(i > 1){
		ll x = stoll(cur);
		if(x % 8 == 0){
			ok = true;
			val = x;
		}
	}
	if(i == 3){
		return;
	}
	if(ok){
		return;
	}
	ff(id, last, n){
		if(ok){
			return;
		}
		string aux = cur;
		aux += str[id];
		brute(i+1, aux, id+1);
	}
}

int main(){
	cin >> str;
	bool z = false, o = false;
	n = str.size();
	ff(i, 0, n){
		if(str[i] == '0'){
			z = true;
		}
		if(str[i] == '8'){
			o = true;
		}
	}
	if(z){
		cout << "YES" << ed << 0;
		return 0;
	}
	if(o){
		cout << "YES" << ed << 8;
		return 0;
	}
	string gg = "";
	brute(0, gg, 0);
	if(!ok){
		cout << "NO";
		return 0;
	}
	cout << "YES" << ed << val;
	
}
