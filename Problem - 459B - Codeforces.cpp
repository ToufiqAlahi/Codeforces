#include<bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define endl '\n'

typedef long long  ll;


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

//////////////////////////////////////////


ll n;
int a[200005];
int mn = INF;
int mx = 0;
void Input() {

    cin >> n;

    for(int i = 0 ; i < n; i++) {

        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
}



void Solve() {


    ll cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {

        if(a[i] == mx) cnt1++;
        if(a[i] == mn) cnt2++;
    }

    cout << mx - mn << " ";
    if(mx == mn) cout << n * (n-1) / 2 << endl;
    else cout << cnt1 * cnt2 << endl;

}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();


  return 0;

}

