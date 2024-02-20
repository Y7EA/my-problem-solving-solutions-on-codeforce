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

ll gcd(ll a, ll b)
{
    while(b!=0)
    {
        ll a2 = a ; 
        a = b ; 
        b = a2 % b ; 
    }
    return a ; 
}
ll lcm(ll x, ll y)
{
    return x * y / gcd(x, y);
}

ll myMod(ll x , ll y)
{
    ll m = x /  y ;
    ll r = x - m * y ; 
    return r ; 
}
void solve()
{
    ll x;
    cin >> x;
    vector<ll> pf;
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            pf.push_back(i);
            x /= i;
        }
    }
    if (x != 1)
        pf.push_back(x);

    for (int i = 0; i < pf.size(); i++)
    {
        cout << pf[i] << " ";
    }
    cout << "\n";
}
int main()
{

    YAHYA
}