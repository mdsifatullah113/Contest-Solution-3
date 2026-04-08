/* ---------------------------------------------------In the name of ALLAH --------------------------------------------------*/
/* ------------------------------------------LA ILAHA ILLALLAH MUHAMMAD RASHULALLAH------------------------------------------*/
/* ---------------------------------------------------- ALLAHU AKBAR --------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Typedefs ---------- */
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vl;
typedef set<int> si;
typedef set<ll> sl;
typedef vector<vi> vvi;
typedef vector<vc> vvc;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
typedef float fl;

/* ---------- Macros ---------- */
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)(x).size()
#define mid(l, r) ((l + r) / 2)
#define left(node) ((node) * 2)
#define right(node) ((node) * 2 + 1)
#define mem(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))

/* ---------- Constants ---------- */
const double PI = 3.141592653;
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000LL;
const ll MOD = 1000000007;
const int mx_int_prime = 999999937;

/* ---------- Fast IO ---------- */
#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

/* ---------- Iterators ---------- */
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

/* ---------- Direction Arrays ---------- */
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
// int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
// int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

// const int mx = 1e5;
vl v;
/*For Division 1: 1900≤rating
For Division 2: 1600≤rating≤1899
For Division 3: 1400≤rating≤1599
For Division 4: rating≤1399
*/
ll solve1(ll n)
{

    ll l1 = 0;
    for (ll i = 0; i < n - 1; i += 2)
    {
        ll sub = v[i + 1] - v[i];
        l1 = max(l1, sub);
    }
    // ll l1 = *max_element(all(v1));
    return l1;
}

void print(ll n)
{
    // if (n)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    cout << n;
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)

    {

        ll m, n, a, b, k, c, c1 = 0, c2 = 0;

        cin >> n;
        // string s1, s2, s3;
        // cin >> s1 >> s2 >> s3;
        // v.assign(n, vc(m));
        v.resize(n);
        for (auto &u : v)
        {
            cin >> u;
        }
        // cin >> a;
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < m; j++)
        //     {
        //         cin >> v[i][j];
        //     }
        // }
        sort(all(v));

        print(solve1(n));
        // cout << endl;
        v.clear();
    }

    return 0;
}
