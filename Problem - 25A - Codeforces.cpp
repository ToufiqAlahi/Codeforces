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
int arr[100];
int odd = 0;
int even = 0;

void Input() {

    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
        if(arr[i] & 1) odd++;
        else even++;
    }
}



void Solve() {


   int idx;

   if(even >= odd) {
       for(int i = 0; i < n; i++) {

            if(arr[i] & 1) {

                idx = i+1;
                break;
            }
       }
   }

   else {

        for(int i = 0; i < n; i++) {

            if(!(arr[i] & 1)) {

                idx = i+1;
                break;
            }
       }
   }

   cout << idx << endl;


}

int main() {

  cin.tie(0);
  ios::sync_with_stdio(false);
  Input();
  Solve();


  return 0;

}

