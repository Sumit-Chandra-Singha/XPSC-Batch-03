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
ll Index(vl &v, int x)
{
    int l = 0,r = v.size()-1,ans=-1;
    while (l <= r)
    {
        int mid = l+(r - l) / 2;
        if (v[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}

    
void solveFunction()
{
    ll n,m,o,p,a,b,c,d,x,y,z,ans=0;
    string s,str,ss;
    cin >> n>>p;
    vl v(n);
    loop(i, 0, n) cin >> v[i];
    loop(i,0,p){
        cin >> x;
        ans = Index(v, x);
        if(ans==-1)
            cout << 0;
        else
            cout << ans + 1;
        cout << "\n";
    }

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