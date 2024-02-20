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
    vector<pair<string, string>> vp;
    vp.push_back(MP("Power", "purple"));
    vp.push_back(MP("Time", "green"));
    vp.push_back(MP("Space", "blue"));
    vp.push_back(MP("Soul", "orange"));
    vp.push_back(MP("Reality", "red"));
    vp.push_back(MP("Mind", "yellow"));

    int n, ctr = 6;
    cin >> n;

    vector<bool> fre(6, true);

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == vp[j].second)
            {
                ctr--;
                fre[j] = false;
            }
        }
    }

    cout << ctr << endl;
    for (int i = 0; i < 6; i++)
    {
        if (fre[i])
        {
            cout << vp[i].first << endl;
        }
    }
}

int main()
{

    YAHYA
    solve();
}