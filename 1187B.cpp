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
  int q;
  cin >> n;

  vector<int> pre[26];

  string s;
  string t;
  cin >> s;

  for(int i = 0; i < s.length(); i++) {

       pre[s[i]-'a'].push_back(i);
  }

  cin >> q;

  while(q--) {

     vector<int> mp(26);
     cin >> t;

     for(int i = 0; i < t.length(); i++) {

        mp[t[i]-'a']++;
     }

     int ans = 0;

     for(int i = 0; i < 26; i++) {

        if(mp[i]) {

            ans = max(ans, pre[i][mp[i]-1]);
        }
     }

     cout << ans+1 << endl;



  }



}
