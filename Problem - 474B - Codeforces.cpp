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


int n;
int m;
int a[1000001];
int k = 1;

void Input() {



}



void Solve() {



}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  //Input();
  //Solve();

  cin >> n;
  int i;
  int j;

    for( i = 1 ; i <= n; i++) {

        int t;
        cin >> t;
        for( j = k; j < k+t; j++) {

            a[j] = i;
        }
        k = k + t;

    }

     int m;
    cin >> m;

    while(m--) {

        int temp;
        cin >> temp;

        cout << a[temp] << endl;

    }




  return 0;

}

