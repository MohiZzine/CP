#include <bits/stdc++.h>

using namespace std;

int main() {
   string s; cin >> s;
   int odd = 0;
   map<char, int> mp;
   for (int i = 0; i < s.size(); i++) {
       mp[s[i]]++;
   }

   for (auto x: mp) {
       if (x.second & 1) odd++;
   }

    if( (odd==0) || (odd & 1)) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
   return 0;
}