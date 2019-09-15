#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

typedef long long  ll;
#define endl '\n'


int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);

  int t;

  cin >> t;

  while(t--) {


        int n, m, k;

        cin >> n >> m >> k;

        vector<int> block(n);

        for(int i = 0; i < n; i++) {

            cin >> block[i];
        }

        int ans = 1;
        for(int i = 0; i < n-1; i++) {

            m += block[i] - max(0, block[i+1] - k);
            if(m < 0) {

                ans = 0;
                break;
            }
        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
