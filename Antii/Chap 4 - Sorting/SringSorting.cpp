#include <bits/stdc++.h>

using namespace std;

bool comp_string(string a, string b) {
  if (a.size() == b.size()) return a < b;
  return a.size() < b.size();
}

int main() {
  string s1 = "monkey";
  string s2 = "alpha";
  vector<string> v_str = {s1, s2};
  sort(v_str.begin(), v_str.end(), comp_string);

  for (auto elem: v_str) {
    cout << elem << " ";
  }
  return 0;
}