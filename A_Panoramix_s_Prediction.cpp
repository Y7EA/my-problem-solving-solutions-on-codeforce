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

bool is_Prime(int n)
{
    int ctr;
    ctr = 1;
    for (int i = 2; i <= 50; i++)
    {
        if (n % i == 0)
            ctr++;
    }
    if (ctr == 2)
        return true;
    else
        return false;
}
void solve()
{
    int x, y, c = 0;
    cin >> x >> y;
    int array_Prime[15] = {0};
    for (int i = 2; i <= 50; i++)
    {
        if (is_Prime(i))
        {
            array_Prime[c] = i;
            c++;
        }
    }
    int pos_x, pos_y;
    for (int i = 0; i < 15; i++)
    {
        if (array_Prime[i] == x)
            pos_x = i;
        if (array_Prime[i] == y)
            pos_y = i;
    }
    is(pos_x +1 == pos_y ) ;
}

int main()
{

    YAHYA
        solve();
}