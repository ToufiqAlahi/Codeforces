
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


    cout << setprecision(5);
    cout << fixed;

    ll n;
    ll a[101];
    ll negfre[1005], posfre[1005];
    cin >> n;
    int s = 0;
    if(n % 2 == 0) s = n/2;
    else  s = (n/2) + 1;

    int neg = 0, pos = 0;
    for(int i = 0; i < n; i++) {

        cin >> a[i];
        if(a[i] < 0) {

            neg++;
        }
        else if(a[i] > 0) {

            pos++;
        }
    }



    if(neg >= s || pos >= s) {

        if(neg >= pos) {

            for(int i = 0; i < n; i++) {

                if(a[i] < 0)
                    negfre[-a[i]]++;
            }


            for(int i = 2; i < 1001; i++) {

                if(negfre[i] == 0) {

                    cout << '-' << i << endl;
                    return 0;
                }
            }

        }

        else {

            for(int i = 0; i < n; i++) {

                if(a[i] > 0)
                    posfre[a[i]]++;
            }
            for(int i = 2; i < 1001; i++) {

                if(posfre[i] == 0) {

                    cout << i << endl;
                    return 0;
                }
            }


        }
    }

    else cout << 0 << endl;





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

