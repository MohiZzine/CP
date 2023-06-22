#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v1;
  vector<int> v2(5);
  vector<int> v3(4, -1);
  v1.push_back(2);
  v1.push_back(18);


  v2.pop_back();
  for (auto x:v1) {
    cout << x << " ";
  }
  cout << endl;

  for (auto x:v2) {
    cout << x << " ";
  }
  cout << endl;

  for (auto x:v3) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}