#include <iostream>
#include <memory>

using namespace std;

class Test{
public:
  Test() { cout << "Costruttore Test" << endl; }
  ~Test() { cout << "Distruttore Test" << endl; }
  void stampa() { cout << "test!" << endl; }
};

int main() {
  cout << "SmartPointers" << endl;

  unique_ptr<Test> ptr = make_unique<Test>();
  ptr->stampa();

  //unique_ptr<Test> ptrx = ptr; //non possibile
  unique_ptr<Test> ptr2 = move(ptr);
  ptr2->stampa();

  shared_ptr<Test> sp1 = make_shared<Test>();
  shared_ptr<Test> sp2 = sp1;
  shared_ptr<Test> sp3 = sp1;

  cout << "num puntatori: " << sp1.use_count() << endl;

  //weak pointer
  weak_ptr<Test> wp = sp1;
  cout << "num puntatori: " << sp1.use_count() << endl;


  return 0;
}
