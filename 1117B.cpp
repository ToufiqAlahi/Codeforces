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

bool file=false,rt=false;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main() {

    FAST_IO();
    cout << setprecision(5);
    cout << fixed;

    ll n, m, k;
    cin >> n >> m >> k;
    ll em[200005];

    for(ll i = 0; i < n; i++) {

        cin >> em[i];
    }

    sort(em, em+n);

    ll x, y;
    x = em[n-1], y = em[n-2];

    cout <<  m/(k+1) * 1ll * (x*k + y) + m % (k+1) * 1ll * x << endl;


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


