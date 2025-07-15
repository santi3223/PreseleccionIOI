#include <bits/stdc++.h>
#include "magic.h"
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

std::vector<int> Alicia(std::vector<int> ar){
	ll n = ar.size();
	vector<int> q1, q2;
	vector<int> arr = ar;
	int cant1 = 0, cant2 = 0;
	if(n > 0){
		vl d(n, 1), p(n, -1);
		ff(i, 0, n){
			ff(j, 0, i){
				if(arr[j] < arr[i] && d[i] < d[j] + 1){
					d[i] = d[j] + 1;
					p[i] = j;
				}
			}
		}
		ll ans = d[0], pos = 0;
		ff(i, 1, n){
			if(d[i] > ans){
				ans = d[i];
				pos = i;
			}
		}
		vector<int> subseq;
		while(pos != -1){
			subseq.pb(arr[pos]);
			pos = p[pos];
		}
		reverse(all(subseq));
		//cout << "SUB1" << ed;
		/*ff(i, 0, subseq.size()){
			cout << subseq[i] << " ";
		}*/
		//cout << ed << ed;
		vector<int> q = arr;
		ll id = 0;
		ff(i, 0, n){
			//cout << "ID" << ed << q[i] << " " << p[i]
			if(id == subseq.size()){
				break;
			}
			if(subseq[id] == q[i]){
				q[i] = -1;
				id++;
			}
		}
		cant1 = subseq.size();
		q1 = q;
	}
	ff(i, 0, n){
		arr[i] *= -1;
	}
	if(n > 0){
		vl d(n, 1), p(n, -1);
		ff(i, 0, n){
			ff(j, 0, i){
				if(arr[j] < arr[i] && d[i] < d[j] + 1){
					d[i] = d[j] + 1;
					p[i] = j;
				}
			}
		}
		ll ans = d[0], pos = 0;
		ff(i, 1, n){
			if(d[i] > ans){
				ans = d[i];
				pos = i;
			}
		}
		vl subseq;
		while(pos != -1){
			subseq.pb(arr[pos]);
			pos = p[pos];
		}
		reverse(all(subseq));
		/*cout << "SUB2" << ed;
		ff(i, 0, subseq.size()){
			cout << -1*subseq[i] << " ";
		}
		cout << ed << ed;*/
		vector<int> q = ar;
		ll id = 0;
		int sz = subseq.size();
		cant2 = min(16, sz);
		ff(i, 0, n){
			//cout << "ID" << ed << q[i] << " " << p[i]
			if(id == cant2){
				break;
			}
			if(subseq[id] == -1*(q[i])){
				q[i] = -1;
				id++;
			}
		}
		q2 = q;
	}
	/*cout << "PRUEBA" << ed << "Q1 " << cant1 << ed;
	ff(i, 0, n){
		cout << q1[i] << " ";
	}
	cout << ed << ed << "Q2 " << cant2 << ed;
	ff(i, 0, n){
		cout << q2[i] << " ";
	}
	cout << ed << ed;
	cout << "=====================================================================" << ed;*/
	if(cant2 == 16){
		//cout << "OP2 MEJOR" << ed;
		return q2;
	}
	//cout << "OP1 MEJOR" << ed;
	return q1;
}

std::vector<int> Beatriz(std::vector<int> Q){
	//cout << "=======================================================================" << ed;
	ll n = Q.size();
	vb visited(n+5, false);
	ff(i, 0, n){
		if(Q[i] != -1){
			visited[Q[i]] = true;
		}
	}
	vl notvis;
	ff(i, 1, n+1){
		if(!visited[i]){
			notvis.pb(i);
		}
	}
	ll base = notvis.size();
	//cout << "NOTVISSIZE " << base << ed;
	//LDS
	vector<int> ans = Q;
	if(base == 16){
		reverse(all(notvis));
		ll id = 0;
		ff(i, 0, n){
			if(id == 16){
				break;
			}
			if(Q[i] == -1){
				ans[i] = notvis[id];
				id++;
			}
		}
	}
	else{
		ll id = 0;
		ff(i, 0, n){
			if(id == base){
				break;
			}
			if(Q[i] == -1){
				ans[i] = notvis[id];
				id++;
			}
		}
	}
	
	return ans;
}
/*
int main(){
	int t;
	cin >> t;
	while(t--){
	  int N;
	  cin >> N;

	  std::vector<int> P(N, 0);
	  for (int i = 0; i < N; i++) {
		cin >> P[i];
	  }


	  std::vector<int> Q = Alicia(P);

	  int S = (int)Q.size();
	  cout << S << ed;
	  for (int i = 0; i < S; i++) {
	   cout << Q[i] << " ";
	  }
	  cout << ed;

	  std::vector<int> B = Beatriz(Q);

	  int T = (int)B.size();
	  cout << T << ed;
	  for (int i = 0; i < T; i++) {
		cout << B[i] << " ";
	  }
	  cout << ed;
		if(P == B){
			cout << "OOOKKK" << ed << ed;
		}
		else{
			cout <<"ERRORRRRR" << ed;
			cout << "ORIGINAL" << ed;
			ff(i, 0, P.size()){
				cout << P[i] << " ";
			}
			
			return 0;
		}
	}

  return 0;
}
*/
