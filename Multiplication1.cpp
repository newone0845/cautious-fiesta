// “Incredible change happens in your life when you decide to take control of what
// you do have power over instead of craving control over what you don't.

// Dear online judge:
//  I've read the problem, and tried to solve it.
//  Even if you don't accept my solution, you should respect my effort.
//  I hope my code compiles and gets accepted.

#include <bits/stdc++.h>
typedef long long ll;
#define forn(i, start, end) for (ll i = start; i < ll(end); i++)
#define input(arr, n) forn(i, 0, n) cin >> arr[i];
#define input2d(arr, n, m) forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mk make_pair
#define f first
#define s second
#define all(x) (x).begin(),(x).end()
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define tc    \
    ll T;     \
    cin >> T; \
    while (T--)
using namespace std;

char utl(char ch){
    ch |= ' ';
    return ch;
}

char ltu(char ch){
    ch &= '_';
    return ch;
}

bool isPrime(ll n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 

bool isPal(string str){
     string s=str;
     reverse(str.begin(),str.end());
     if(s==str)return true;
     return false;	
}

void printDivisors(ll n) 
{ 
    for (ll i=1; i*i<=n; i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                cout<<i; 
  
            else 
                cout<< i<<" "<<n/i<<" "; 
        } 
    } 
}

ll gcd(ll a, ll b){
    return __gcd(a,b);
}

ll lcm(ll a, ll b){
    return (a*b)/(__gcd(a,b));
}

ll power(ll base,ll exponent){
    ll ans=1;
    while(exponent){
        ans *= base;
        exponent--;
    }
    return ans;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    cout<<n*m<<'\n';
    
}

int32_t main()
{
    FAST;
    //tc
    {
        solve();        
    }
    return 0;
}