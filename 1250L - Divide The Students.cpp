#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>

int main() 
{
    fast
    tc
    int a,b,c,sum;
    w(t)
    {
        cin>>a>>b>>c;
        if(a>c)
        {
            swap(a,c);
        }
        int ans[3] = {0};
        ans[0] = c/2;
        ans[1] = c-c/2;
        ans[2] = a;
        w(b)
        {
            sort(ans,ans+3);
            ans[0]++;
        }
        cout<<max(ans[0],max(ans[1],ans[2]));
        nl;
    }
	return 0;
}
