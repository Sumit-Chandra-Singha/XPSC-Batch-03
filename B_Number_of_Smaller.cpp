#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;

#define fio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for(int i=a; i<b; i++)
#define nl cout<<"\n";
// if(){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }

bool isprime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solveFunction()
{
    ll n,m,o,p,a,b,c,d,x,y,z,ans=0;
    string s,str,ss;
    cin >> n>>m;
    vl v1(n);
    vl v2(m);
    vl v3(m+n);
    loop(i, 0, n) cin >> v1[i];
    loop(i, 0, m) cin >> v2[i];
    int i = 0, j = 0, k = 0;
    while(j<m){
        if( i==n || v1[i]>=v2[j]){
            cout << i << " ";
            j++;
        }
        else{
            i++;
        }
    }
    cout << "\n";
}

int main()
{
    fio;
    // int t;
    // cin>>t;
    // while(t--)
        solveFunction();

    return 0;
}