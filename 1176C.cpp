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

  int n;
  vector<int> cnt(6);

  cin >> n;

  vector<int> a(n);

  for(int i = 0; i < n; i++) {

     cin >> a[i];
  }

  for(int i = 0; i < n; i++) {

     if(a[i] == 4) {

        cnt[0]++;
     }
     if(a[i] == 8) {

        if(cnt[0]) {

            cnt[0]--;
            cnt[1]++;
        }
     }
     if(a[i] == 15) {

        if(cnt[1]) {

            cnt[1]--;
            cnt[2]++;
        }
     }
     if(a[i] == 16) {

        if(cnt[2]) {

            cnt[2]--;
            cnt[3]++;
        }
     }
     if(a[i] == 23) {

        if(cnt[3]) {

            cnt[3]--;
            cnt[4]++;
        }
     }
     if(a[i] == 42) {

        if(cnt[4]) {

            cnt[4]--;
            cnt[5]++;
        }
     }
  }




  cout << n - (cnt[5] * 6) << endl;

}

