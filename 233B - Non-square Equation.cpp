#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

ll cj(ll k)
{
    ll a = 0;
    while (k > 0)
    {
        a += k % 10;
        k = k / 10;
    }
    return a;
}
ll n, i, g, j, xn = -1;
double x1, x2;
int main() 
{
    cin >> n;
    for (i = 1; i <= 81; i++) 
    {
        x1 = (-i + sqrt(i * i + 4 * n)) / 2;
        x2 = (-i - sqrt(i * i + 4 * n)) / 2;
        g = (int) x1;
        j = (int) x2;
        if (g == x1 && j == x2) 
        {
            if (g > j && g > 0 && cj(g) == i) 
            {
                xn = (ll)x1;
                break;
            } 
            else if (j > g && j > 0 && cj(j) == i) 
            {
                xn = (ll)x2;
                break;
            }
        }
    }
    cout << xn;
}
