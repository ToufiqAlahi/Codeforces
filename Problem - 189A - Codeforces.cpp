#include<bits/stdc++.h>

using namespace std;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

typedef long long  ll;
#define endl '\n'




int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};


const int MOD = 1000000007;

//////////////////////////////////////////


int n, a, b, c;
void Input() {

    cin >> n >> a >> b >> c;
}



void  Solve() {


    if(a == 1 || b == 1 || c == 1) {

        cout << n << endl;
        return;
    }
    int cnt = 0;
    for(int i = 0; (i * a) <= n; i++) {
        for(int j = 0; (j * b) <= n - (i*a); j++) {
            for(int k = 0; (k * c) <= n - (i*a + j*b); k++) {

                if(n - (i*a + j*b + k*c) == 0) cnt = max(cnt, i+j+k);
            }
        }
    }

    cout << cnt << endl;


}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();


  return 0;

}

