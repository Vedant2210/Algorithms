#include <bits/stdc++.h>
#define lli long long
#define pii pair<lli,lli>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>v(n,vector<lli> (m))
#define vpii vector<pair<lli,lli>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const lli MOD = 1e9 + 7;
lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
lli binpow(lli base, lli expo){
    if(expo == 0)return 1;
 
    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void func(string s,set<string>&st){
    if(s.length()==1){
        st.insert(s);
        return;
    }
    if(st.find(s)==st.end()){
        st.insert(s);
        // string str=s.substr(1);
        // func(str,st);
        func(s.substr(1),st);
        // string str2=s.erase(1, 1);
        // func(str2,st);
        func(s.substr(0, 1) + s.substr(2), st);
      
    }
    else{
        return;
    }
    
}
// void func(string s, set<string>& st) {
//     if (s.empty()) return;  

//     st.insert(s);  


//     func(s.substr(1), st);     
//     func(s.substr(0, 1) + s.substr(2), st);
// }

void solve() {
    lli n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    lli ans=0;
    for(lli i=0;i<n;i++){
        st.insert(s[i]);
        ans+=st.size();
    }
    cout<<ans<<endl;




    
}

signed main(){
    lli t;
    cin>>t;
    while(t--){
        solve();
    }
        

}