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

  int q;
  ll n, m;



  cin >> q;

  for(int i = 0; i < q; i++) {

     cin >> n >> m;

     vector<string> str(n);
     vector<int> row_cnt(n), col_cnt(m);

     for(int j = 0; j < n; j++) {

        cin >> str[j];
     }

     for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            if(str[i][j] == '.') {

                row_cnt[i] += 1;
                col_cnt[j] += 1;
            }
        }
     }

     int ans = n + m;
     for(int i = 0; i < n; i++) {

        for(int j = 0; j < m; j++) {

            ans = min(ans, row_cnt[i] + col_cnt[j] - (str[i][j] == '.'));
        }
     }

     cout << ans << endl;

  }

}

