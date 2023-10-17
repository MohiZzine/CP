
/*

Problem: D
Created by: Mouad Berqia
Date: 12/10/2023

*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <deque>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
typedef long long ll;

using namespace std;


const int N = 1e6 + 5;
vector<vector<int>> divisors(N);
vector<bool> isPrime(N, true);

int mx = 0;
void sieve(){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < N; i++){
        if(isPrime[i]){
            divisors[i].push_back(i);
            for(int j = i + i; j < N; j += i){
                isPrime[j] = false;
                divisors[j].push_back(i);
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    ll t; cin >> t;

    while(t--){
        int n; cin >> n;
        map<int, int> freq;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        map<int, ll> mp;
        for(auto p : freq){
            for(int i = 0; i < sz(divisors[p.first]); i++){
                int x = p.first;
                int cnt = 0;
                while(x % divisors[p.first][i] == 0){
                    x /= divisors[p.first][i];
                    cnt++;
                }
                cnt = cnt * p.second;
                mp[divisors[p.first][i]] += cnt;
            }
        }

        for(auto p : mp){
            if(p.second % n != 0){
                cout << "NO\n";
                goto next;
            }
        }

        cout << "YES\n";
        next:;

    }

    return 0;
}
