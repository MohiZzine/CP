#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v = {5, 2, 3, 1, 2, 5, 7, 1};

  // v.begin() points to the first element 
  cout << *v.begin() << endl;
  sort(v.begin(), v.end());
  for (auto x:v) {
    cout << x << " ";
  }
  cout << endl;

  // iterator to the first element whose value is at least 5
  auto a = lower_bound(v.begin(), v.end(), 5);
  // iterator to the first element whose value is larger than 5
  auto b = lower_bound(v.begin(), v.end(), 5);

  cout << "a = " << *a << " " << "b = " << *b << endl;

  reverse(v.begin(), v.end());
  for (auto x:v) {
    cout << x << " ";
  }
  cout << endl;

  random_shuffle(v.begin(), v.end());
  for (auto x:v) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}