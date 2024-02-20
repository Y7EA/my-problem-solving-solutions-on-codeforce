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
    int n ; 
    cin>>n ; 
    vector<int> res ; 
    if(n%2 == 1){
    cout<<-1; return ; }

    for(int i = 1 ; i <= n ; i ++)
    {
        res.push_back(i);
    }
    // l f l f l f 
    // 0 1 2 3 4 5 
    // 1 2 3 4 5 6 
    // 2 1 4 3 6 5 
    int l = 0 ,  f = 1 ; 
    while(f<n)
    {
        swap(res[l],res[f]);
        l = l + 2  ;
        f = l + 1   ;  
    }
    
  for(int i = 0 ; i < res.size();i++)
  {
    cout<<res[i]<<" ";
  }
}

int main()
{

    YAHYA
        // solve();
    int n;
	cin >> n;
	if(n%2==1)
	{
		printf("-1");
		return 0;
	}
	while (n--) 
	{
		printf("%d ",n+1);
	}
	return 0;

}