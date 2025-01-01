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

ll n;
vector<vl> c;
vector<vector<vl>> sum; //intente hacerlo con un monton de psums, pero no me salió, mejor con un vector 3D ;P

void init(string a, string b){
	n = a.size();
	c = vector<vl>(n+1, vl(3));
	sum = vector<vector<vl>>(n+1, vector<vl>(3, vl(3)));

	ff(i, 1, n+1){
		ff(j, 0, 3){
			ff(k, 0, 3){
				sum[i][j][k] = sum[i-1][j][k];
			}
		}
		ff(j, 0, 3){
			c[i][j] = c[i-1][j];
		}
		ll num, bnum;
		if(a[i-1] == 'A'){
			num = 0;
		}
		else if(a[i-1] == 'C'){
			num = 1;
		}
		else{
			num = 2;
		}
		if(b[i-1] == 'A'){
			bnum = 0;
		}
		else if(b[i-1] == 'C'){
			bnum = 1;
		}
		else{
			bnum = 2;
		}
		sum[i][num][bnum]++;
		c[i][num]++;
		c[i][bnum]--;
	}
}

int get_distance(int x, int y){
	x++;
	y++;
	ll res = 0;
	vector<vl> cc(3, vl(3, 0));
	ff(i, 0, 3){
		ff(j, 0, 3){
			cc[i][j] = sum[y][i][j] - sum[x-1][i][j];
		}
	}
	ff(i, 0, 3){
		if(c[y][i] != c[x-1][i]){
			return -1;
		}
	}
	
	ll tmp;
	tmp = min(cc[0][1], cc[1][0]);
	cc[0][1] -= tmp; cc[1][0] -= tmp; res += tmp;
	tmp = min(cc[0][2], cc[2][0]);
	cc[0][2] -= tmp; cc[2][0] -= tmp; res += tmp;
	tmp = min(cc[2][1], cc[1][2]);
	cc[2][1] -= tmp; cc[1][2] -= tmp; res += tmp;
	
	res += 2*(cc[0][1]+cc[1][0]);
	return res;
}
/*
int main(){
	IO;
	string a, b;
	cin >> a >> b;
	init(a, b);
	ff(i, 0, n){
		cout << a << " " << b << ed;
		ff(j, i, n){
			cout << i << " " << j << " " << get_distance(i, j) << ed;
		}
	}
}
*/
