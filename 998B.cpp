#include <bits/stdc++.h>


using namespace std;

#define endl '\n'
#define PB push_back
#define MP make_pair
#define LL long long
#define FOR(i,a,b) for(int i = (a); i <= (b); i++)
#define RE(i,n) FOR(i,1,n)
#define REP(i,n) FOR(i,0,(int)(n)-1)
#define R(i,n) REP(i,n)
#define VI vector<int>
#define PII pair<int,int>
#define LD long double
#define FI first
#define SE second
#define st FI
#define nd SE
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())

typedef long long ll;

bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main() {

    FAST_IO();
    cout << setprecision(5);
    cout << fixed;

    int n, b, a[101];
    vector<int>  brk;
    vector<int> cuts;


    int even = 0;

    cin >> n >> b;


    for(int i = 0; i < n; i++) {

        cin >> a[i];

        if(a[i] % 2 == 0) even++;
        else even--;

        if(even == 0) {

            brk.push_back(i);
        }

    }


    for(int i = 0; i < brk.size(); i++) {


        if(brk[i] == n-1) break;

        else cuts.push_back(abs(a[brk[i]] - a[brk[i]+1]));
    }

    sort(cuts.begin(), cuts.end());






    int ans = 0;
    for(int i = 0; i < cuts.size(); i++) {

        if(b - cuts[i] >= 0) {

            b = b - cuts[i];
            ans++;
        }
        else break;
    }

    cout << ans << endl;





    return 0;
}

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}

