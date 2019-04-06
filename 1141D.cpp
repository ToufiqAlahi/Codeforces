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

const int A = 26;



int main() {

    //FAST_IO();
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    cout << setprecision(5);
    cout << fixed;

    int n;
    cin >> n;

    vector< vector<int> > left(A);
    vector<int> wl;
    string l;
    cin >> l;

    for(int i = 0; i < n; i++) {

        if(l[i] != '?') {

            left[l[i]-'a'].push_back(i);
        }
        else {

            wl.push_back(i);
        }
    }

    vector< vector<int> > right(A);
    vector<int> wr;
    string r;
    cin >> r;

    for(int i = 0; i < n; i++) {

        if(r[i] != '?') {

            right[r[i]-'a'].push_back(i);
        }
        else {

            wr.push_back(i);
        }
    }

    vector< pair<int, int> > p;
    vector<int> cl(A), cr(A);

    for(int i = 0; i < A; i++) {

        for(int j = 0; j < min(left[i].size(), right[i].size()); j++) {

            p.push_back(make_pair(left[i][j] + 1, right[i][j] + 1));
        }
        cl[i] = cr[i] = min(left[i].size(), right[i].size());
    }


    for(int i = 0; i < A; i++) {

        while(cl[i] < left[i].size() && !wr.empty()) {

            p.push_back(make_pair(left[i][cl[i]] + 1, wr[wr.size()-1] + 1));
            cl[i]++;
            wr.pop_back();
        }
    }

    for(int i = 0; i < A; i++) {

        while(cr[i] < right[i].size() && !wl.empty()) {

            p.push_back(make_pair(wl[wl.size()-1] + 1, right[i][cr[i]] + 1));
            cr[i]++;
            wl.pop_back();
        }
    }

    for(int j = 0; j < min(wr.size(), wl.size()); j++) {

        p.push_back(make_pair(wl[j] + 1, wr[j] + 1));
    }

    cout << p.size() << endl;

    for(auto pp: p) {

        cout << pp.first << " " << pp.second << endl;
    }
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


