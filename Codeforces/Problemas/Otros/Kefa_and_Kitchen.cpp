#include <bits/stdc++.h>
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
ll MOD = 1e9+7;

vl b;
ll n;
ll len(ll cur){
    ll k = 0;
    ff(i, 0, n){
        if(cur & b[i]){
            k++;
        }
    }
    return k;
}

int main(){
    ll m, k;
    cin >> n >> m >> k;
    vl arr(n);
    ff(i, 0, n){
        cin >> arr[i];
    }
    b = vl(n+2);
    b[0] = 1;
    ff(i, 1, n+1){
        b[i] = b[i-1]*2;
    }
    vector<vl> c(21, vl(21));
    while(k--){
        ll x, y, z;
        cin >> x >> y >> z;
        c[x-1][y-1] = z;
    }
    vector<vl> dp(b[n], vl(n, LLONG_MIN));
    ff(i, 0, n){
        dp[b[i]][i] = arr[i];
    }
    ff(mask, 0, b[n]){
        ff(i, 0, n){
            if(mask & b[i]){
                ff(j, 0, n){
                    if((mask&b[j]) == 0){
                        dp[(mask|b[j])][j] = max(dp[(mask|b[j])][j], dp[mask][i] + c[i][j] + arr[j]);
                    }
                }
            }
        }
    }
    ll ans = LLONG_MIN;
    ff(mask, 0, b[n]){
        if(len(mask) == m){
            ff(i, 0, n){
                ans = max(ans, dp[mask][i]);
            }
        }
    }
    cout << ans << ed;
}
