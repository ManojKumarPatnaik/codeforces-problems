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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    ll i,j,k;
    ll n,x,y;
    map<ll,vector<ll>> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x].push_back(i);
    }
    vector<pp> v;
    map<ll,vector<ll>>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        k=p->first;
        if(mp[k].size()==1)
        {
            v.push_back({k,0});
        }
        else
        {
            set<ll> s;
            for(i=1;i<mp[k].size();i++)
            {
                s.insert(abs(mp[k][i]-mp[k][i-1]));
            }
            set<ll>::iterator q=s.begin();
            if(s.size()==1)
            {
                v.push_back({k,*q});
            }
        }
        p++;
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
