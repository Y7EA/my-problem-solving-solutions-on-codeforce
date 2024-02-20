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
    stack <string> ss; 
    for(int i = 0 ; i < n ; i++)
    {
        // {"Header", "Row", "Cell", "Table"}
        string s; cin>>s ; 
        if(s == "Header" || s == "Row" || s == "Cell"|| s == "Table"){
        ss.push(s);
        }
        // {"EndHeader", "EndRow", "EndCell", "EndTable"}
        else if(s=="EndHeader" && ss.top() =="Header" && !ss.empty())
        {
            ss.pop();
        }
        else if(s=="EndRow" && ss.top() =="Row" && !ss.empty())
        {
            ss.pop();
        }
        else if(s=="EndCell" && ss.top() =="Cell" && !ss.empty())
        {
            ss.pop();
        }
        else if(s=="EndTable" && ss.top() =="Table" && !ss.empty())
        {
            ss.pop();
        }
    }
    if(ss.empty())cout<<"ACC\n";
    else cout<<"WA\n";

}
int main()
{

    YAHYA
        solve();
    
}