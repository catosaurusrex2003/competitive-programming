#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define cy cout << "YES" << endl;
#define cn cout << "NO " << endl;
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
void leftrotate(vector<int> &s, int d)
{
    reverse(s.begin(), s.begin() + d);
    reverse(s.begin() + d, s.end());
    reverse(s.begin(), s.end());
}
void rightrotate(vector<int> &s, int d) { leftrotate(s, s.size() - d); }
//------> for (auto x : v) can be used on map vector set and cannot be used to take input" ";
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << ':' << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << ':' << arg1 << '|';
    __f(comma + 1, args...); // MIGHT NEED TO CHANGE THIS
}
void solve();
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void printvect(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
template <typename K, typename V>
void print_map(std::unordered_map<K, V> const &m)
{
    for (auto const &pair : m)
    {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
}
void solve()
{
    int n, cache;
    cin >> n;
    vector<int> a, b, diff;
    for (int i = 0; i < n; i++)
    {
        cin >> cache;
        a.pb(cache);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cache;
        b.pb(cache);
    }
    for (int i = 0; i < n; i++)
    {
        diff.pb(a[i] - b[i]);
    }
    int maxElem = *max_element(diff.begin(),diff.end());
    int maxCount = count(diff.begin(),diff.end(),maxElem);
    cout<<maxCount<<endl;
    for(int i = 0 ; i < n ; i ++){
        if(diff[i] == maxElem){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}