#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 1️⃣ GCD & LCM
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a,b) * b; }

// 2️⃣ Extended Euclid: solves ax + by = gcd(a,b)
ll ext_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) { x = 1; y = 0; return a; }
    ll x1, y1 = 0;
    ll g = ext_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

// 3️⃣ Fast Exponentiation
ll modexp(ll a, ll e, ll m) {
    ll res = 1 % m;
    while (e) {
        if (e & 1) res = (__int128)res * a % m;
        a = (__int128)a * a % m;
        e >>= 1;
    }
    return res;
}

// 4️⃣ Modular Inverse (prime m)
ll modinv(ll a, ll m) { return modexp(a, m-2, m); }

// 5️⃣ Sieve of Eratosthenes: primes up to N
vector<bool> sieve(int N) {
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= N; ++p)
        if (isPrime[p])
            for (int i = p*p; i <= N; i += p)
                isPrime[i] = false;
    return isPrime;
}

// 6️⃣ Factorials & Inverses (for nCr mod M)
const int MAXN = 1000000;
const ll MOD = 1000000007;
ll fact[MAXN+1], invf[MAXN+1];
void initFact() {
    fact[0] = 1;
    for (int i = 1; i <= MAXN; ++i)
        fact[i] = fact[i-1] * i % MOD;
    invf[MAXN] = modinv(fact[MAXN], MOD);
    for (int i = MAXN; i > 0; --i)
        invf[i-1] = invf[i] * i % MOD;
}

// 7️⃣ Compute nCr % MOD
ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invf[r] % MOD * invf[n-r] % MOD;
}

// 8️⃣ Chinese Remainder Theorem
ll chineseRemainder(const vector<ll>& a, const vector<ll>& m) {
    ll M = 1, res = 0;
    for (ll mi : m) M *= mi;

    for (size_t i = 0; i < a.size(); ++i) {
        ll Mi = M / m[i];
        ll invMi = modinv(Mi, m[i]);
        res = (res + a[i] * invMi % M * Mi) % M;
    }
    return res;
}

// Counts distinct prime divisors of n
int countDistinctPF(long long n) {
    int cnt = 0;
    for (long long p = 2; p*p <= n; ++p) {
        if (n % p == 0) {
            ++cnt;
            while (n % p == 0) 
                n /= p;
        }
    }
    if (n > 1) 
        ++cnt;
    return cnt;
}