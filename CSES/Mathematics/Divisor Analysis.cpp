#include <bits/stdc++.h>

using namespace std;

const int MODULO = 1e9 + 7;

long long power(long long x, long long k) {
	if (k == 0) return 1 % MODULO;
	long long u = pow(x, k / 2);
	u = (u * u) % MODULO;
	if (k % 2 == 1) u = (u * x) % MODULO;
	return u;
}
long long num_divs(unordered_map<int, long long> umap) {
	long long num = 1;
	for (auto x: umap) {
		num *= ((x.second + 1) % MODULO);
	}
	return num % MODULO;
}

long long sum_divs(unordered_map<int, long long> umap) {
	long long res = 1;
	for (auto x: umap) {
		int fac = 1, term = 1, sec = x.second;
		while(sec > 0) {
			fac *= x.first;
			term += (fac % MODULO);
			sec--;
		}
		res *= (term % MODULO);
	}
	return res % MODULO;
}

//long long prod_divs(unordered_map<int, long long> umap) {
//	long long total = 1, ans;
//	
//	for (auto x: umap) {
//		int sec = x.second;
//		while(sec > 0) {
//			total *= x.first;
//			sec--;
//		}
//	}
//	
//	total %= MODULO;
//	int num = num_divs(umap);
//	ans = power(total, num / 2);
//	if (num % 2 == 1)  ans = (ans * total) % MODULO;
//	return ans;
//}

long long prod_divs(unordered_map<int, long long> umap) {
    long long total = 1, ans = 1;

    for (auto x : umap) {
        int prime = x.first;
        int power = x.second;

        total = (total * power) % MODULO;
        if (power % 2 == 1) {
            total = (total * prime) % MODULO;
        }
    }

    ans = power(total, num_divs(umap) / 2);

    if (num_divs(umap) % 2 == 1) {
        ans = (ans * total) % MODULO;
    }

    return ans;
}



void solve (unordered_map<int, long long> umap) {
	cout << num_divs(umap) % MODULO << " " << sum_divs(umap) << " " << prod_divs(umap);
}

int main() {
	int n; cin >> n;
	unordered_map<int, long long> umap;
	while(n--) {
		int first; cin >> first;
		cin >> umap[first];
	}
	solve(umap);
	return 0;
}