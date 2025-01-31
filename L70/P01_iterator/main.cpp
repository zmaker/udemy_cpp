#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "STL Iterator" << endl;

  vector<int> v = {10,20,30};
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  for (auto it = v.rbegin(); it != v.rend(); it++) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
