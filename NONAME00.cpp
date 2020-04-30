// Author: proRam
// Name: Shubh Bansal
// Dated: 
// Question

#include <bits/stdc++.h>
// #pragma GCC target ("sse4.2")
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#ifndef ONLINE_JUDGE 
class Timer { 
    private: chrono::time_point <chrono::steady_clock> Begin, End; public: Timer () : Begin(), End (){ Begin = chrono::steady_clock::now(); } ~Timer () { End = chrono::steady_clock::now(); cout << "\nDuration: " << ((chrono::duration <double>)(End - Begin)).count() << "s\n"; } } T;
#endif    
#if __cplusplus > 199711L
#define register      
#endif
#define TEMPL(T) template<typename T>
#define TEMPL2(T1,T2) template<typename T1, typename T2>
#define TEMPLARGS(Args) template<typename... Args>
#define LEN(x) (sizeof(x)/sizeof(x[0]))
#define ALLA(x) x, x + (sizeof(x)/sizeof(x[0]))
#define ENDL cout << endl
#define DBG(x) cout << "| " << #x << " : " << x << ' '
#define DBG1(n,j) cout << "| " << #n << "[" << j << "] = " << n[j] << ' '
#define DBG2(n,x,y) cout << "| " << #n <<  "[" << x << "][" << y << "] = " << n[x][y] << ' '
#define FOR(i,start,stop,step) for ( __typeof(start) i = start ; i < stop ; i+=step )
#define FOR2(i,b1,e1,s1,j,b2,e2,s2) for ( __typeof(b1) i = b1 ; i < e1 ; i+=s1 ) { for ( auto j = b2 ; j < e2 ; j+=s2 ) {
#define FORA(i,c) for ( auto i : c )
#define FORAR(i,c) for ( auto& i : c )

//Binary Functions
#define PARITY __builtin_parity
#define STBTS __builtin_popcount
#define CLRLZ __builtin_clz
#define CLRTZ __builtin_ctz
#define PARITY1 __builtin_parityl
#define STBTS1 __builtin_popcountl
#define CLRLZ1 __builtin_clzl
#define CLRTZ1 __builtin_ctzl
#define PARITY2 __builtin_parityll
#define STBTS2 __builtin_popcountll
#define CLRLZ2 __builtin_clzll
#define CLRTZ2 __builtin_ctzll
// bool ispow2( auto )

// STL containers
#define pb push_back
#define mp make_pair 
#define mt make_tuple
#define fr first
#define sc second
#define LENV(x) (x.size())
#define FORCONT( itr, container ) for ( auto& itr : container )
#define ALLV(v) v.begin(), v.end()
#define UMAP unordered_map
#define USET unordered_set
#define MAP map
#define SET set

// AlGOS
#define SORTV(v) sort(ALLV(v)) 
#define RSORTV(v) sort(ALLV(v),greater< __typeof(*v.begin()) >()) 
#define SUMV(v) (accumulate( ALLV(v), (__typeof(*v.begin()))0 )) 
#define PROV(v) (accumulate( ALLV(v), (__typeof(*v.begin()))1, multiplies< __typeof(*v.begin()) >())) 
#define SORTA(v) sort(ALLA(v)) 
#define RSORTA(v) sort(ALLA(v),greater<__typeof(*v.begin())>()) 
#define SUMA(x) (accumulate( ALLA(x), (__typeof(*v.begin()))0 )) 
#define PROA(x) (accumulate( ALLA(x), (t__typeof(*v.begin())1, multiplies< __typeof(*v.begin()) >())) 
#define PRESUMV(v) partial_sum(ALLV(v),v)
#define PREPROV(v) partial_sum(ALLV(v), v.begin(), multiplies< __typeof(*v.begin()) >())
#define PRESUMA(v) partial_sum(ALLA(v),v)
#define PREPROA(v) partial_sum(ALLA(v), v, multiplies< __typeof(*v.begin()) >())
#define SWAP(x,y) tie(x,y) = mt(y,x)
//Lambdas

using ll = long long ;
using ull = unsigned long long ;
using pll = pair<ll, ll> ;
using vll = vector<ll> ;
using vpll = vector<pll> ;
using vvll = vector<vll> ;
using vs = vector<string> ;

using pbds = tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;

constexpr auto M7 = 1000000007 ;
constexpr auto M9 = 998244353 ;

// graph algos
TEMPL(T) void dfs( UMPA<T,vector<T> > graph, UMAP<T,bool> &vis, T val ) {
    if ( vis[val] )
        return ;
    vis[val] = true ;
    FOR(i,grapg[val]) {
        dfs(graph,vis,i) ;
    }}
TEMPL(T) int cycles( UMAP<T,vector<T> > graph ) {
    int cycles = 0 ;
    UMAP<T, bool> vis;
    FORA(i,graph) {
        
        ++cycles
    }
}

// min max, input, output
TEMPL(T)        T min( const T args, ...) {
    T minval, curval ;
    va_list l ;
    va_start(l, args) ;
    minval = va_arg(l,T) ;
    FOR(i,2,args+1,1) if ( (curval=va_arg(l,T)) < minval ) minval = curval ;
    va_end(l) ; 
    return minval ;}
TEMPL(T)        T max( const T args, ...) {
    T maxval, curval ;
    va_list l ;
    va_start(l, args) ;
    maxval = va_arg(l,T) ;
    FOR(i,2,args+1,1) if ( (curval=va_arg(l,T)) > maxval ) maxval = curval ;
    va_end(l) ; 
    return maxval ;}
TEMPL(T)        T sum( const T args, ...) {
    T x, a;
    va_list l ;
    va_start(l, args) ;
    x = va_arg(l,T) ;
    FOR(i,2,args+1,1) x+=va_arg(l,T) ;
    va_end(l) ; 
    return x ;}

TEMPL(T)        void innum(T &number) { 
    bool negative = false; 
    register ll c; 
    number = 0; 
    c = getchar_unlocked(); 
    if (c=='-') { 
        negative = true; 
        c = getchar(); 
    } 
    for (; (c>47 && c<58); c=getchar()) 
        number = number*10 + c - 48; 
    if (negative) 
        number *= -1; } 

TEMPLARGS(Args) void input(Args&... args){
    ((cin >> args), ...);}

TEMPLARGS(Args) void print(Args... args){
    ((cout << args << " "), ...);
}


int32_t main(int argc, char** argv) {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr) ; cout.tie(nullptr) ;

    // TIME("main") {

    int t=1 ;
    // innum(t) ;
    
    while( t-- ) {
        
        int n=6 ;
        
        // tknum<int>(n) ;
        // vll v(n) ;
        // FOR(i,0,LENV(v),1) tknum<int>(v[i]) ;
        // 0.00386131s

        // innum(n) ;
        // vll v(n) ;
        // FOR(i,0,LENV(v),1) innum(v[i]) ;
        //0.00112186s

        // FOR(i,0,n,1) DBGG(v,i), ENDL ;
        // FOR(i,0,n,1) DBG1(v,i1), ENDL ;

        // ll arr[n] ;
        // FOR(i,0,n,1) arr[i] = v[i] ;
        // PRESUMA(arr) ;
        // FOR(i,0,n,1) DBG1(arr,i), ENDL ;

        // cout << (SUMV(v,ll)) << endl ;
        // cout << (PROV(v,ll)) << endl ;

        // 2d matrix input and output
        // vvll mat(n,vll(n)) ;
        // FOR2(i,0,n,1,j,0,n,1) mat[i][j] = i*n+j ; } }

        // FOR2(i,0,n,1,j,0,n,1) 
        //     // DBG(i) ; DBG(j) ;
        //     cout << i << "," << j << "  ";}
        //     cout << "\n" ;
        // }

        // print( "Min = ", min(5, 1,2,3,4,5) ) ;

        // int arr[] = {1,2,3,4,5} ;
        // cout << SUMV(v)+1 << endl ;



    }

    // pair p{1,3} ;
    // auto [x, y] = p  ;  
    // DBG(x), ENDL ;
    // DBG(y), ENDL ;

    // Works
    // vector v1 = {10,20,30,40,50} ;
    // FOR(i,v1.begin(),v1.end(),1) 
    //     DBG(*i), ENDL;

    // Dosent WOrk
    // vector v ;
    // FOR(i,0,n,1) v.pb(i*5) ;

    // cout << SETBITS(5) ;
    // ENDL ;

    // int arr[] = {1,2,3,4,5} ;
    // cout << LEN(arr) << endl ;

    // }

    return 0 ;   

}