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
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;
/*
set<string> vec;

void back(string base, ll cur){
	if(cur == 4){
		vec.insert(base);
		return;
	}
	ff(i, 0, 3){
		string k = base+"W";
		back(k, cur+1);
		k = base+"D";
		back(k, cur+1);
		k = base+"L";
		back(k, cur+1);
	}
}
*/
int main(){
	IO
	/*string b = "";
	back(b, 0);
	for(auto &p : vec){
	string twoo=p;
	*/
	string twoo;
	cin >> twoo;
	string str = "";
	ff(i, 0, twoo.size()){
		if(twoo[i] == 'L'){
			continue;
		}
		else{
			str += twoo[i];
		}
	}
	vector<pair<char, ll>> list;
	char c;
	bool ok = false;
	ll cur = 0;
	ll n = str.size();
	ff(i, 0, n){
		if(str[i] == 'L'){
			continue;
		}
		if(!ok){
			c = str[i];
			ok = true;
		}
		else if(str[i] != str[i-1]){
			list.pb({c, cur});
			c = str[i];
			cur = 0;
		}
		cur++;
	}
	list.pb({c, cur});
	ll st = 0, fin = list.size();
	ll count = 0;
	//cout << st << " " << fin << ed;
	if(list[0].fi == 'D'){
		count += list[0].se;
		st++;
	}
	if(list[fin-1].fi == 'D' && st < fin){
		count += list[fin-1].se;
		fin--;
	}
	//cout << st << " " << fin << ed;
	//ff(i, 0, list.size()){
	//	cout << list[i].fi << " " << list[i].se << ed;
	//}
	ll q = 0;
	ff(i, st, fin){
		//cout << "I " << i << " " << list[i].fi << " " << list[i].se << ed;
		if(i == fin-1){
			//cout << "Fin ";
			q += list[i].se;
			if(q == 1){
				count += 2;
			}
			else{
				count += (q*3)-2;
			}
			//cout << q;
		}
		else if(i == st){
			//cout << "Inic ";
			q += list[i].se;
			//cout << q;
		}
		else{
			if(list[i].fi == 'W'){
			//	cout << "W";
				q += list[i].se;
			//	cout << " " << q;
			}
			else{
				ll sin = q + list[i+1].se;
				if(sin == 1){
					sin = 2;
				}
				else{
					sin = sin*3-2;
				}
				
				ll sup = q;
				if(sup == 1){
					sup = 2;
				}
				else{
					sup = sup*3-2;
				}
				sup += list[i].se;
				ll con = list[i+1].se;
				if(con == 1){
					con = 2;
				}
				else{
					con = con*3-2;
				}
				con += sup;
				//cout << sin << " " << con << " " << q;
				if(sin < con){
					//cout << "A";
					count += sup;
					q = 0;
				}
			}
		}
		//cout << ed;
	}
	cout << max(0LL, count) << ed;
	
	return 0;
}
