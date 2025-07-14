#include <bits/stdc++.h>
//#include "magic.h"
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back
#define pll pair<ll, ll>
#define fi first
#define se second

int main(){
	ll n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	ll c = 0;
	queue<string> q;
	set<string> st;
	q.push(str);
	st.insert(str);
	while(!q.empty() && st.size() < k){
		string cur = q.front();
		q.pop();
		ff(i, 0, cur.size()){
			string neww = cur;
			neww.erase(i, 1);
			if(!st.count(neww) && st.size()+1 <= k){
				q.push(neww);
				st.insert(neww);
				c += n-neww.size();
			}
		}
	}
	if(st.size() < k){
		cout << -1 << ed;
	}
	else{
		cout << c << ed;
	}
	
}
