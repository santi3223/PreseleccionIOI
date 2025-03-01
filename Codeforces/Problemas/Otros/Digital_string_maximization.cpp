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

int main(){
    IO
    ll t;
    cin >> t;
    while(t--){
  string str;
  cin >> str;
  ll n = str.length();
  ff(i, 0, n){
   //cout << "I " << i << ", == ";
   ll maxdigit = str[i]-'0';
   //cout << maxdigit << ed;
   ll pos = i;
   ff(j, i+1, min(i+10, n)){
    //cout << " ";
    ll cur = str[j]-'0';
    //cout << "J " << j << ", == " << cur << " - " << j-i << " = " << cur-(j-i) << " ? " << maxdigit;
    if(maxdigit < cur - (j-i)){
     maxdigit = cur - (j-i);
     pos = j;
     //cout << "  NW! " << ed;
    }
    //cout << ed;
   }
   for(ll k = pos; k > i; k--){
    ll cur = str[k]-'0';
    cur--;
    char c = cur + '0';
    str[k] = str[k-1];
    str[k-1] = c;
   }
   //cout << " /// " << str << " /// " << ed;
  }
  cout << str << ed;
    }
    
    return 0;
}
