#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
  cout << "STL Algoritmi" << endl;

  vector<int> v = {5,3,7,1,3,6,0,12};
  sort(v.begin(), v.end());
  for (int num : v) {
    cout << num << " ";
  }
  cout << endl;

  //shuffle
  random_device rd;
  mt19937 g(rd());
  shuffle(v.begin(), v.end(), g);
  for (int num : v) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
