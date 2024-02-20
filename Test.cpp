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
///Example:
// Can we swap an elements from A with an element from B such that the
// sum of elements in the two arrays are equal with O(N) time complexity?

// A = 3 4 7 8     >> sumA = 22
// B = 1 2 2 5     >> sumB = 10

//             0 1 2 3 4 5 6 7 8
// countA =    0 0 0 1 1 0 0 1 1
int vis[100];
void solve()
{
  int arrA[]={3,4,7,8};
  int arrB[]={1,2,2,5};
  int n = sizeof(arrA)/sizeof(arrB[0]);
  int s1 = 0 , s2 = 0 ;
  for(auto t : arrA)
  {
    s1+=t;
  }
   for(auto t : arrB)
  {
    s2+=t;
  }
  int t = abs(s1-s2);
  for(auto t : arrA)
  {
    vis[t]++;
  }
  for(int i = 0 ; i < n ; i++)
  {
   
  }
}
int main()
{

    YAHYA
        solve();
    
}