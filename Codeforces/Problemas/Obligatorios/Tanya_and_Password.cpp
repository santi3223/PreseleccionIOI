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

unordered_map<string, vs> conexiones;
unordered_map<string, ll> diff;
vs path;

void dfs(string str){
	while(conexiones[str].size() != 0){
		string t = conexiones[str].back();
		conexiones[str].pop_back();
		dfs(t);
	}
	path.pb(str);
}

int main(){
	IO
	ll n;
	cin >> n;
	ff(i, 0, n){
		string str;
		cin >> str;
		conexiones[str.substr(0, 2)].pb(str.substr(1, 2));
		diff[str.substr(0, 2)]++;
		diff[str.substr(1, 2)]--;
	}
	string s = "";
	for(auto &p : diff){
		if(p.se == 1 && s == ""){
			s = p.fi;
		}
		else if(p.se != -1 && p.se != 0){
			cout << "NO";
			return 0;
		}
	}
	if(s == ""){
		s = (*diff.begin()).fi;
	}
	dfs(s);
	reverse(all(path));
	if(path.size() != n+1){
		cout << "NO";
		return 0;
	}
	cout << "YES" << ed;
	ff(i, 0, path.size()-1){
		cout << path[i][0];
	}
	cout << path.back();
	
	return 0;
}
