#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	vector<vl> grid = {
						{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
						{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
						{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
						{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
						{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
						{1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
						{1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
						{1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
						{1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
						{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
					  };
	ll t;
	cin >> t;
	while(t--){
		vector<string> arr(10);
		ll n = 10;
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll c = 0;
		ff(i, 0, n){
			ff(j, 0, n){
				if(arr[i][j] == 'X'){
					c += grid[i][j];
				}
			}
		}
		cout << c << ed;
	}
}
