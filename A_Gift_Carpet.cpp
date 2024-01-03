#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)

int solveFunction()
{
    ll n,m;
    cin>> n >> m;

    char s[n][m];
    string cnst = "vika";

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> s[i][j];
        }
    }
    bool vika[4];
    for(int i=0; i<4; i++){
        vika[i]=false;
    }
    int k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(s[j][i]==cnst[k]){
                vika[k]=true;
                k++;
                break;
            }
        }
    }
    bool t=true;
    for(int i=0; i<4; i++){
        if(vika[i]==false){
            t=false;
            break;
        }
    }
    if(t) cout<< "YES";
    else cout<< "NO";
    cout<<"\n";
    return 0;
}

int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
        solveFunction();

    return 0;
}