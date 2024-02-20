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
    int n, q;
    cin >> n >> q;
    vector<pair<int, int > >v(n);
    for (auto &t : v)
    {
        cin >> t.first >> t.second;
    }
    string s;
    pair<int, int> p;
    while (q--)
    {
        cin >> s >> p.first >> p.second;
        if (s == "find")
        {
            int st = 0 , ed = n-1 , cur = -1 , md ; 
            while(st<=ed)
            {
                md = (st+ed) / 2 ; 
                if(v[md]== p)
                {
                    cout<<"found"<<endl;
                    return -1 ;
                }
                else if(v[md]>p) {
                    ed = md - 1 ;
                }
                else 
                {
                    st = md +1 ;
                }
            }
            cout<<"not found"<<endl;
        }
        else if (s=="lower")
        {
            int st = 0 , ed = n-1 , cur = -1 , md ; 
            while(st<=ed)
            {
                md = (st+ed) / 2 ; 
                if(v[md]< p)
                {
                    cur = md ; 
                    st = md + 1 ; 
                }
                else {
                    ed = md - 1 ;
                }
            }
            cout<<cur<<endl;
        }
        else 
        {
            int st = 0 , ed = n-1 , cur = -1 , md ; 
            while(st<=ed)
            {
                md = (st+ed) / 2 ; 
                if(v[md]> p)
                {
                    cur = md ; 
                    ed = md - 1 ; 
                }
                else {
                    st = md + 1 ;
                }
            }
            cout<<cur<<endl;
        }
        }
    }