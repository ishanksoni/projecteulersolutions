#include<bits/stdc++.h>
#define NL "\n"
#define N  "NO\n"
#define Y "YES\n"
#define ll long long
#define ld long double
#define w(t) long long t ; cin>>t ; while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(itr,v) for(auto itr=v.begin();itr!=v.end();itr++)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    IOS
    vector<ll> freq(1e5 + 1,0);
    w(k){
        ll x1,x2;
        cin>>x1;cin>>x2;
        freq[x1]++;
        freq[x2+1]--;
    }
    f(i,1,1e5 + 1){
        freq[i] += freq[i-1];
    }
    ll x; cin>>x;
    cout<<freq[x]<<NL;
    return 0;
}
