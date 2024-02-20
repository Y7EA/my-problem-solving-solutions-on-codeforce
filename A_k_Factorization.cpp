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
    int n, k;
    cin >> n >> k;
    vector<int> pf;
    for (int i = 2; i * i <= n; i++){
        while (n % i == 0)
        {
            pf.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        pf.push_back(n);
    }
    
    if(pf.size()< k) {cout<<-1 ; return ;} 
    for(int i = 0 ; i < k-1 ; i++)
    {
        cout<<pf[i]<<" ";
    }
    int ans = 1 ;
    for(int i = k-1 ; i < pf.size();i++)
    {
    ans*=pf[i];
    }
    cout<<ans<<"\n";
}
int main()
{

    YAHYA
        solve();
}