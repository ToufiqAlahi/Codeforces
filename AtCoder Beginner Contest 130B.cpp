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


int n, x;
int L[100];
void Input() {

    cin >> n >> x;
    for(int i = 0; i < n; i++) {

        cin >> L[i];
    }
}



void Solve() {

    int com = 0;
    int cnt = 1;

    for(int i = 1; i <= n; i++) {


        com = com + L[i-1];
        if(com > x) {

            break;
        }

        cnt++;
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

