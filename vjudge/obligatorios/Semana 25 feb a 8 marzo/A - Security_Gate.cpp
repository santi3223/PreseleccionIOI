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

vl pos;
ll cc = 0, n;
bool check(string s){
	ll c = 0;
	ff(i, 0, s.size()){
		if(s[i] == '('){
			c++;
		}
		else{
			c--;
		}
		if(c < 0){
			return false;
		}
	}
	if(c != 0){
		return false;
	}
	return true;
}

vs strings;
void recur(string s, ll p){
	if(p == pos.size()){
		strings.pb(s);
	}
	else{
		string cur = s;
		cur[pos[p]] = '(';
		recur(cur, p+1);
		cur[pos[p]] = ')';
		recur(cur, p+1);
	}
}

int main(){
	IO
	cin >> n;
	string str;
	cin >> str;
	ff(i, 0, n){
		if(str[i] == 'x'){
			pos.pb(i);
		}
	}
	recur(str, 0);
	ff(xx, 0, strings.size()){
		string cur = strings[xx];
		vs flipped;
		flipped.pb(cur);
		ff(l, 0, n){
			ff(r, l, n){
				string neww = cur;
				ll ap = l;
				while(ap <= r){
					if(neww[ap] == '('){
						neww[ap] = ')';
					}
					else{
						neww[ap] = '(';
					}
					ap++;
				}
				flipped.pb(neww);
			}
		}
		bool ok = false;
		ff(i, 0, flipped.size()){
			if(check(flipped[i])){
				ok = true;
				break;
			}
		}
		if(ok){
			cc++;
		}
		
	}
	cout << cc%MOD;
	return 0;
}
