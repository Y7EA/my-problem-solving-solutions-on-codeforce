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
    int n ; cin>>n ;
    string ans ="" ; 
    vector<int> fre(26,0), arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        for(char r ='a' ; r<='z'; r++)
        {
            if(fre[r-'a']==arr[i])
            {
                fre[r-'a']++;
                ans+=r;
                break;
            }
        }
    }
     cout<<ans<<endl;
}
int main()
{

    YAHYA
    cout << fixed << setprecision(15);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}