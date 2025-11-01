#include <bits/stdc++.h>
using namespace std;

// F(n) = F(n-1) + F(n-2); F(0) = 0, F(1) = 1.

// recursive
long long fib_rec(int n) {
    if (n==1) return 1;
    if (n==0) return 0;
    return fib_rec(n-1) + fib_rec(n-2);
}

// iterative
const int MAX_N = 1e2 + 1;
long long F[MAX_N];
std::vector<long long> Fib;

long long fib_ite(int n) {
    /* C-array implementation */
    F[0] = 0, F[1] = 1;
    if (n==0) return 0;
    if (n==1) return 1;
    for (int i = 2; i <= n; i++) {
	if (F[i] == 0) F[i] = F[i-1] + F[i-2];
    }
    return F[n];
    
    /* C++ std::vector implementation */
    // if (Fib.empty()) { Fib.push_back(0); Fib.push_back(1); }
    // if (n==0) return 0;
    // if (n==1) return 1;
    // for (int i = 2; i <= n; i++) {
    //     if (i >= Fib.size()) Fib.push_back(Fib[i-1] + Fib[i-2]);
    // }
    // return Fib[n];
}
    

int main() {
    // cout << "***** RECURSION - Time: O(2^n) Space: O(n) *****\n";
    // for (int i = 0; i < 48; i++)
    //     cout << "F(" << i << ") = " << fib_rec(i) << "\n";
    // 
    // cout << "***** ITERATION - Time: O(n) Space: O(1) *****\n";
    // for (int i = 0; i < 48; i++)
    //     cout << "F(" << i << ") = " << fib_ite(i) << "\n";

    int n = 90;
    cout << "F(" << n << ") = " << fib_ite(n) << "\n";
}
