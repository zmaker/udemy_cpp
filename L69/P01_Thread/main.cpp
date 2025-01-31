#include <iostream>
#include <thread>
#include <ctime>

using namespace std;

void fun() {
  cout << "thr" << endl;
}
void funcount() {
  for (int i = 0; i < 10; i++) {
    cout << "t:" << i << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
  }
  cout << "thr-end" << endl;
}

void fun3(const string &msg, int numero ) {
  cout << "thr fun3: " << msg << " n: " << numero << endl;
}

int main() {
  cout << "Thread" << endl;

  //thread t(fun);
  thread t2(funcount);

  thread t3(fun3, "hello!", 42);

  thread t4(funcount);

  t2.join();
  //t2.detach();
  t3.join();
  t4.join();

  cout << "End Main" << endl;
  return 0;
}
