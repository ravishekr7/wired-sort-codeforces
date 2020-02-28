#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vi;
#define mp make_pair
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define fp(i,k,n) for(int i=k;i<n;i++)
#define Fo(i,n) for(int i=1;i<=n;i++)
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vi a(n),b(n,0);
        fo(i,n)
        cin>>a[i];
        fo(i,m)
        {
            ll x;
            cin>>x;
            b[x-1]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                ll j=i;
                while(j<n&&b[j])++j;
                sort(a.begin()+i,a.begin()+j+1);
                i=j;
            }
        }
        ll flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
