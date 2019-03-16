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
 ll n;
ll a[200005];
ll b[200005];
int main() {


    cout << setprecision(5);
    cout << fixed;



    cin >> n;

    for(ll i = 0; i < n/2; i++) {

        cin >> b[i];
    }

    a[0] = 0;
    a[n-1] = b[0];
    ll mx = b[0], mn = 0;
    for(ll i = 1; i < n/2; i++) {

        if(b[i] - mn <= mx) {

            a[n-i-1] = b[i] - mn;
            a[i] = b[i] - a[n-i-1];
            mx = a[n-i-1];
        }
        else {

            a[n-i-1] = mx;
            a[i] = b[i] - mx;
            mn = a[i];
        }

    }

    //sort(a, a+n);

    for(ll i = 0; i < n; i++) {

        cout << a[i] << " ";
    }

    cout << endl;





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


