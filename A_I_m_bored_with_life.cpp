#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define cn                      \
    int n;                      \
    cin >> n;                   \
    int arr[n];                 \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define YAHYA                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define vi vector
#define MP make_pair
#define loop(l, n) for (ll i = l; i < n; i++)
#define loop2(l, n) for (ll j = l; j < n; j++)
#define be begin()
#define en end()
#define it iterator
#define pb push_back
#define fi first
#define se second
#define PQ priority_queue
#define is(x) cout << ((x) ? "YES\n" : "NO\n");
#define ll long long
using namespace std;
ll mod = 998244353;
const ll N = 2e5 + 1, M = 1e5 + 1;


ll gcd (ll a , ll b)
{
    while(b!=0)
    {
        ll a2 = a ; 
        a = b ; 
        b = a2%b ; 
    }
    return a ; 
}

void solve()
{
    ll a , b ; cin>>a>>b ; 
    ll ans = 1 ; 
    for(ll i = 1 ; i <= min(a,b) ; i++)
    {
        ans*=i;
    }
    cout<<ans<<endl;
}
int main()
{

    YAHYA  
        solve();
    
}