#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

typedef long long  ll;
typedef unsigned long long ull;
#define endl '\n'




int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

//////////////////////////////////////////


int n;
ull x, j;

void Input() {

    cin >> n;
}



void Solve() {


    for(int i = 0; i < n; i++) {

        cin >> x;

        ull sq = sqrt(x);
        for( j = 2; j*j < sq; j++) {

            if(x % j == 0) break;
        }

        if(j*j > sq && sq*sq == x && x > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();


  return 0;

}

