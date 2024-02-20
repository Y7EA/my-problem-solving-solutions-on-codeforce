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

void solve()
{    
    ll n ; cin>>n ;
    if(n%32640 == 0 )
    cout<<"32640\n";
    else if (n%8128 == 0)
    cout<<"8128\n";
    else if (n%2016 == 0)
    cout<<"2016\n";
    else if (n%496 == 0)
    cout<<"496\n";
    else if (n%120 == 0 )
    cout<<"120\n";
    else if(n%28 == 0)
    cout<<"28\n";
    else if (n%6 == 0)
    cout<<"6\n";
    else cout<<"1\n";
}
int main()
{

    YAHYA
        solve();
}