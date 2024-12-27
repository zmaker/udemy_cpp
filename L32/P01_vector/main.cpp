#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
  cout << "Vector" << endl;

  vector<int> numeri;
  vector<int> num(10);
  vector<int> voti = {6,7,8,9,6,7,8,7,8,9,5};

  cout << voti[0] << endl;
  for (int i = 0; i < voti.size(); i++) {
    cout << voti[i] << " ";
  }
  cout << endl;

  voti[1] = 8;

  for (int el: voti) {
    cout << el << ",";
  }
  cout << endl;

  numeri.push_back(10);
  numeri.push_back(20);
  numeri.push_back(30);
  for (int el: numeri) cout << el << ","; cout << endl;

  cout << "size: " << numeri.size() << " cap: " << numeri.capacity() << endl;

  cout << "primo el: " << numeri.front() << endl;
  cout << "ultimo el: " << numeri.back() << endl;

  numeri.insert(numeri.begin()+2, 15);
  for (int el: numeri) cout << el << ","; cout << endl;

  numeri.insert(numeri.begin()+1, 3, 0);
  for (int el: numeri) cout << el << ","; cout << endl;

  vector<int> x = {1000, 1001, 1002};
  vector<int> y = {200,300};
  x.insert(x.begin()+1, y.begin(), y.end());
  for (int el: x) cout << el << ","; cout << endl;

  x.pop_back();
  for (int el: x) cout << el << ","; cout << endl;

  x.clear();
  cout << "size: " << x.size() << " cap: " << x.capacity() << endl;

  vector<int> n = {1,2,3,4,5,6};
  reverse(n.begin(), n.end());
  for (int el: n) cout << el << ","; cout << endl;

  random_device rd;
  mt19937 g(rd());

  shuffle(n.begin(), n.end(), g);
  for (int el: n) cout << el << ","; cout << endl;

  return 0;
}
