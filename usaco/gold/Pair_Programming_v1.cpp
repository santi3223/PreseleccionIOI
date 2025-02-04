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

ll c = 0, n;
set<string> st;
bool esnum(char x){
	if(x == '0' || x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9'){
		return true;
	}
	return false;
}
string stringa, stringb;

void rec(string &cur, ll pos){
	if(pos == n){
		vector<string> a;
		string letra = "abcdefghijklmn";
		ll curl = 0;
		ff(i, 0, cur.size()){
			if(cur[i] == '0'){
				a.clear();
			}
			if(i == 0 && esnum(cur[i])){
				continue;
			}
			if(cur[i] == '1'){
				continue;
			}
			if(cur[i] == '+'){
				string str = to_string(letra[curl]); //sin el to_string no da por alguna razon
				a.pb(str);
				curl++;
			}
			else{
				ff(j, 0, a.size()){
					if(esnum(a[j][0])){
						string p = to_string(a[j][0]); //acá igual
						string notanumber = "";
						ff(k, 1, a.size()){
							if(!esnum(a[j][k])){
								notanumber = a[j].substr(k, a.size()-k);
								break;
							}
							p += a[j][k];
						}
						ll num = stoll(p);
						num *= (cur[i] - '0');
						string q = to_string(num);
						a[j] = q+notanumber;
					}
					else{
						string p = a[j];
						a[j] = cur[i]+p;
					}
				}
			}
		}
		string ahorasi = "";
		ff(i, 0, a.size()){
			ahorasi += a[i];
		}
		if(st.size() != 0){
			st.insert(ahorasi);
		}
	}
	string x = cur;
	rec(cur, pos+1);
	
	x += stringa[pos];
	rec(x, pos+1);
	
	x += stringb[pos];
	rec(x, pos+1);
	
	x = cur+stringb[pos];
	rec(x, pos+1);
}

int main(){
	IO
	ll t;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> stringa >> stringb;
		string x;
		rec(x, 0);
		cout << st.size() << ed;
	}
	
	return 0;
}

//creo que esto no es para nada eficiente, y que lo podría haber hecho muucho mas corto
//los cambios los haré en el upsolve, esta muy complicado ya
