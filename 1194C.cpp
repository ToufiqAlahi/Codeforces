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
  cin >> q;

  while(q--) {

    string s, t, p;
    vector<int> mp(26);

    cin >> s;
    cin >> t;
    cin >> p;

    for(int i = 0; i < p.length(); i++) {

        mp[p[i]-'a']++;
    }




    int i = 0, j = 0;
    int flag = 1;
    while(i <= s.length() && j <= t.length()) {

        if(s[i] == t[j]) {

            i++;
            j++;
        }
        else {

            if(mp[t[j]-'a']) {

                mp[t[j]-'a']--;

            }
            else {

                flag = 0;
                break;
            }
            j++;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

}

