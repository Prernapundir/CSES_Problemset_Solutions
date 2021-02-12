#include<bits/stdc++.h>
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
//loops
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define tc(t) int t; cin >> t; while (t--)
#define trav(a,x) for (auto& a: x)
 
 
#define endl "\n"
#define vi vector<int>
#define pi pair<int,int>
#define vii vector<pi>
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define ini(a, i) memset(a, i, sizeof(a))
#define fi first
#define se second
#define pb push_back
#define rr return 0
#define sz(s) s.size()
#define bits(n) __builtin_popcount(n)
 
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
 
 
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
 
template<typename... T>
void in(T&... args) {
    ((cin >> args), ...);
}
 
template<typename... T>
void out(T&&... args) {
    ((cout << args << " "), ...);
}
 
template<typename... T>
void outl(T&&... args) {
    ((cout << args << endl), ...);
}
 

/*----------------------main code starts from here-----------------------*/


signed main(){
    fast
    system("clear");
    int t=1;
    // cin>>t;
    int n;
 
    while(t--){
       in(n);
       while(n>1){
           out(n);
           if(n&1){
               n=n*3+1;
           }else{
               n/=2;
           }
       }
       out(n);
    }
   
    rr;
}
