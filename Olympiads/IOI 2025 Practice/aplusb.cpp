#include <bits/stdc++.h>
#include "aplusb.h"
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

vl a, b;

void initialize(std::vector<int> A, std::vector<int> B){
	ff(i, 0, A.size()){
		a.pb(A[i]);
	}
	ff(i, 0, B.size()){
		b.pb(B[i]);
	}
  return;
}

int answer_question(int i, int j) {
  return a[i]+b[j];
}
/*
int main() {
  int N;
  assert(1 == scanf("%d", &N));
  std::vector<int> A(N), B(N);
  for (int k = 0; k < N; k++)
    assert(1 == scanf("%d", &A[k]));
  for (int k = 0; k < N; k++)
    assert(1 == scanf("%d", &B[k]));

  int Q;
  assert(1 == scanf("%d", &Q));
  std::vector<int> i(Q), j(Q);
  for (int k = 0; k < Q; k++)
    assert(2 == scanf("%d %d", &i[k], &j[k]));

  fclose(stdin);

  std::vector<int> S(Q);

  initialize(A, B);

  for (int k = 0; k < Q; k++)
    S[k] = answer_question(i[k], j[k]);

  for (int k = 0; k < Q; k++)
    printf("%d%c", S[k], " \n"[k + 1 == Q]);
  
  fclose(stdout);

  return 0;
}
*/
