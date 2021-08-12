#include<bits/stdc++.h>
using namespace std;
#define endl                        "\n"
#define po3                         1162261467
#define ll                          long long
#define ld                          long double
#define bs                          binary_search
#define make_unique(vec)            vec.erase(unique(all(vec)), vec.end())
#define all(x)                      (x).begin(),(x).end()
#define Sort(x)                     sort(all((x)))
#define itc                         int t;cin>>t;while(t--)
#define SET(a, b)                   memset(a, b, sizeof(a))
#define ff                          first
#define ss                          second
#define forn(i,a, n)                for (ll i = a; i < (n); i++)
#define fio                         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define filecode                    ifstream in;ofstream out;in.open("input.txt");out.open("output.txt");
#define fls                         cout.flush();fflush(stdout)
typedef unsigned long long          ull;
const int inf = 1e9 + 10;
const ll INF = 1e18 + 10;
const int mod = 1e9 + 7;
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*******************Read Input ********************************/
template <typename T>void read(T &p){cin >> p;}
template <typename T, typename T1>void read(pair<T, T1> &p){read(p.ff);read(p.ss);}
template <typename T>void read(T arr[], ll n){for (ll i = 0; i < n; i++){read(arr[i]);}}
template <typename T>void read(vector<T> &arr){for (ll i = 0; i < arr.size(); i++){read(arr[i]);}}
template <typename T>void read(vector<vector<T>> &arr) {for (ll i = 0; i < arr.size(); i++){read(arr[i]);}}
/*******************Output ********************************/
template <typename T>void out(T &n){cout << n;}
template <typename T, typename T1>void out(pair<T, T1> &p){out(p.ff);cout << " ";out(p.ss);}
template <typename T>void out(T arr[], ll n){for (ll i = 0; i < n; i++){out(arr[i]);cout << " ";}}
template <typename T>void out(vector<T> &arr){for (ll i = 0; i < arr.size(); i++){out(arr[i]);if (i != arr.size() - 1)cout << " ";}}
template <typename T>void out(set<T> &arr){for (auto i : arr){out(i);cout << " ";}}
template <typename T>void out(multiset<T> &arr){for (auto i : arr){out(i);cout << " ";}}
template <typename T, typename T1>void out(map<T, T1> &m){for (auto i : m){out(i.first);cout << " ";out(i.second);cout << " ";}}
template <typename T>void out(vector<vector<T>> &arr) {for (ll i = 0; i < arr.size(); i++){out(arr[i]);cout << " " << endl;cout << endl;}}

ll power(ll a, ll b, ll md) { return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md)); }
ll power(ll a, ll b) { return (!b ? 1 : (b & 1 ? a * power(a * a , b / 2) : power(a * a , b / 2) )); }

void solve();
const int asz=100005;

int32_t main()
{

    fio;
    ll tc=1;
    // cin >> tc;
    while(tc--)
    {
        solve();
    }
}

void solve()
{
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    int ans=0;
    int i=0;
    while(i<n)
    {
        if (s[i] == t[i])
        {
            i++;
        }
        else
        {
            if(i+1<n && s[i]!=t[i] && s[i+1]!=t[i+1] && s[i]==t[i+1] && s[i+1]==t[i])
            {
                ans+=1;
                i+=2;
                continue;
            }
            else
            {
                i++;
                ans+=1;
            }
            // i++;          
        }
    }
    cout << ans << endl;
}
