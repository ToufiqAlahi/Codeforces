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

  int w, h;

  cin >> w >> h;

  vector<string> s(w+1);
  bool vis[550][550];

  memset(vis, false, sizeof(vis));

  for(int i = 0; i < w; i++) {

     cin >> s[i];
  }

  if(w == 1 && h == 1 && s[w-1][h-1] == '*') {

    cout << "NO" << endl;
    return 0;
  }

  int strt_row = -1;
  int strt_col = -1;
  for(int i = 0; i < w; i++) {

     for(int j = 0; j < h; j++) {

        if(i > 0 && i < w-1 && j > 0 && j < h-1) {

            if(s[i][j+1] == '*' && s[i][j-1] == '*' && s[i+1][j] == '*' && s[i-1][j] == '*' && s[i][j] == '*') {

                strt_row = i;
                strt_col = j;
            }
        }
     }
  }

  //cout << strt_row << " " << strt_col << endl;

  if(strt_col == -1 && strt_row == -1) {

     cout << "NO" << endl;
     return 0;
  }

  for(int i = strt_col; i < h; i++) {

      if(s[strt_row][i] == '*' && !vis[strt_row][i]) vis[strt_row][i] = true;
      else break;
  }

  for(int i = strt_col-1; i >= 0; i--) {

      if(s[strt_row][i] == '*' && !vis[strt_row][i]) vis[strt_row][i] = true;
      else break;
  }

  for(int i = strt_row+1; i < w; i++) {

      if(s[i][strt_col] == '*' && !vis[i][strt_col]) vis[i][strt_col] = true;
      else break;
  }

  for(int i = strt_row-1; i >= 0; i--) {

       if(s[i][strt_col] == '*' && !vis[i][strt_col]) vis[i][strt_col] = true;
       else break;
  }


  for(int i = 0; i < w; i++) {

     for(int j = 0; j < h; j++) {

        if(vis[i][j] == false && s[i][j] == '*') {

            cout << "NO" << endl;
            return 0;
        }

     }
  }


  cout << "YES" << endl;






}

