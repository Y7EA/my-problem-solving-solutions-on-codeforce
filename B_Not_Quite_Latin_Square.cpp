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
    char arr [3][3];
    for(int i = 0 ; i< 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cin>>arr[i][j];
        }
    }
    int ctrA = 0 , ctrB = 0 , ctrC = 0 ; 
    int indexRow_ = 0 , indexCol_ = 0 ;
      for(int i = 0 ; i< 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(arr[i][j] == 'A')
            {
               ctrA ++ ;  
            } 
            if(arr[i][j] == 'B')
            {
                ctrB++;
            }
            if(arr[i][j] == 'C')
            {
                ctrC++;
            }
        }
    }
    if (ctrA==2) cout<<"A"<<endl; 
    if (ctrB==2)cout<<"B"<<endl;
    if (ctrC==2) cout<<"C"<<endl;
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