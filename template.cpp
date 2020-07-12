#include<bits/stdc++.h>
using namespace std;

template <class T> ostream& operator <<(ostream &os, const vector<T> &V) {
    os << "[ ";
    for(auto v : V) os << v << " ";
    return os << "]";
}

template <class T> ostream& operator <<(ostream &os, const set<T> &S){
    os << "{ ";
    for(auto s:S) os << s << " ";
    return os << "}";
}

template <class T> ostream& operator <<(ostream &os, const unordered_set<T> &S){
    os << "{ ";
    for(auto s:S) os << s << " ";
    return os << "}";
}

template<class L, class R> ostream& operator <<(ostream &os, const pair<L,R> &P) {
    return os << "(" << P.first << "," << P.second << ") ";
}

template<class L, class R> ostream& operator <<(ostream &os, const map<L,R> &M) {
    os << "{ ";
    for(auto m:M) os << "("<<m.first<<":"<<m.second<<") ";
    return os<<"}";
}

template<class T> ostream& operator <<(ostream &os, stack<T> S){
    while(!S.empty()){
        os << S.top() << "\n";
        S.pop();
    }
    return os;
}

template<class T> ostream& operator <<(ostream &os, queue<T> Q){
    while(!Q.empty()){
        os << Q.front() << " ";
        Q.pop();
    }
    return os;
}


/*/-------------------------------- -Defines------------------------------------/*/

#define int long long
#define float double
#define F first
#define S second
#define pb push_back
#define mp make_pair


typedef long long ll;
typedef vector<int> intvec;
typedef vector<string> strvec;
typedef vector<char> charvec;
typedef vector<float> floatvec; 
typedef pair<int, int> intpair; 
typedef stack<int> intstack;
typedef queue<int> intqueue;
typedef map<int, int> intmap;

#define all(A)          A.begin(), A.end()
#define rep(i, n)       int i=-1; while(++i < n)
#define loop(i, n)      for(int i=0; i<n; i++)
#define Loop(i, k, n)   for(int i=k; k<n?i<n:i>n; k<n?i++:i--)
#define iterate(it, A)  for(auto it=A.begin(); it!=A.end(); it++)


/*/-----------------------------Modular Arithmetic------------------------------/*/

const int mod = 1e9+7;
inline int modulo(int x){
    x = x%mod;
    return x<0? x+mod:x;
}

inline int add(int x, int y){
    x += y;
    return modulo(x);
}

inline int sub(int x, int y){
    x -= y;
    return modulo(x);
}

inline int mul(int x, int y){
    x = x*1ll*y;    
    return modulo(x);
}

inline int power(int x, int y){
    if(y==0)    return 1;
    int temp = power(x, y/2);
    temp = mul(temp, temp);
    if(y%2==1)  temp = mul(temp, x);
    return temp;       
}

inline int inv(int x){
    return power(x, mod-2);
}


/*/---------------------------------Code Here-----------------------------------/*/

void solve(){
    
}

int32_t main(){
    int T=1; cin>>T;
    Loop(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}

