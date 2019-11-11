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


int n, m;
int boy[100], girl[100];
void Input() {

    cin >> n;
    for(int i = 0 ; i < n; i++) {

        cin >> boy[i];
    }
    cin >> m;

    for(int i = 0; i < m ; i++) {

        cin >> girl[i];
    }
}



void Solve() {


    sort(boy, boy+n);
    sort(girl, girl+m);

    int i = 0;
    int j = 0;
    int p = 0;
    while(i < n && j < m) {

        int b = boy[i];
        int g = girl[j];

        int f = max(b, g);
        int s = min(b, g);

        if(f - s >= 0 && f - s <= 1) {

            p++;
            i++;
            j++;
        }
        else {

            if(b > g) {

                j++;
            }
            if(g > b) {

                i++;
            }
        }
    }

    cout << p << endl;


}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();


  return 0;

}

