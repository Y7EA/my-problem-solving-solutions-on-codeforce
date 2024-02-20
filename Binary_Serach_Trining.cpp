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

}
int main()
{

    YAHYA
   int arr[]={5,2,4,3,-1,9,3,7,6};
   int n = 8 , k = 4 ; 
   int sum = 0 , mx ; 
   for(int i = 0 ; i < k ; i ++)
   sum+=arr[i];

    mx = sum ;
   for(int i = k ; i< n ; i++)
   {
    sum-=arr[i-k];
    sum+=arr[i];
    mx = max(sum , mx );
   }

   cout<<mx<<endl;
  
}