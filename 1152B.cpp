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

int x;

bool isComplete(int y) {

    y += 1;
    while(y % 2 == 0) {

        y /= 2;
    }
    return(y == 1);
}

int msb(int y) {

    for(int i = 20; i >= 0; i--) {

        if((y >> i) & 1) {

            return i;
        }
    }
    return -1;
}



void Input() {

    cin >> x;
}

void Solve() {

    int i = 0;
    vector<int> ans;

    while(!isComplete(x)) {

        i++;
        if(i % 2 == 0) {

            x++;
            continue;
        }
        int r = msb(x);
        if((1 << r) != x) r++;
        x = (x ^ ((1 << r) - 1));
        ans.push_back(r);
    }

    cout << i << endl;
    vector<int>:: iterator it;
    for(it = ans.begin(); it != ans.end(); it++) {

        cout << *it << " ";
    }
    cout << endl;

}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();
  return 0;

}

