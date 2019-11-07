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


int n, m, a;
void Input() {

    cin >> n >> m >> a;
}

void Solve() {

    unsigned long long  wid, len;
    if(m % a == 0) wid = m / a;
    else wid = (m / a) + 1;

    if(n % a == 0) len = n / a;
    else len = (n / a) + 1;

    //cout << wid << " " << len << endl;

    cout <<  wid * len << endl;

}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();






  return 0;

}

