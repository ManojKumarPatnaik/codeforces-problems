#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
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

int n;
vector<int> vc;
int main() 
{
    cin>>n;
    int tmp;
    for (int i=0; i<n; i++) 
    {
        cin>>tmp;
        vc.push_back(tmp);
    }
    long long dp[n];
    dp[0] = 0;
    for (int i=1; i<n; i++) 
    {
        dp[i] = abs(vc[i-1] - vc[i]);
    }
    long long dp_2[n];
    dp_2[0] = dp[0];
    for (int i=1; i<n; i++) 
    {
        if (i % 2 == 1)
        {
            dp_2[i] = dp_2[i-1] + dp[i];
        } 
        else 
        {
            dp_2[i] = dp_2[i-1] - dp[i];
        }
    }
    long long min = 2000000000;
    long long max = 0;
    for (int i=0; i<n; i++) 
    {
        if (min > dp_2[i]) 
        {
            min = dp_2[i];
        }
        if (max < dp_2[i]) 
        {
            max = dp_2[i];
        }
    }
    cout<<abs(max-min);
    return 0;
}
