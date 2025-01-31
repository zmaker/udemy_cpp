#include <iostream>
#include <thread>
#include <string>
#include <ctime>

using namespace std;

void funzione_thread() {
  for (int i = 0; i < 10; i++) {
    cout << "thr: " << i << endl;

    this_thread::sleep_for(std::chrono::milliseconds(500));
  }
  cout << "end\n";
}

void stampa_messaggio(const string &msg, int numero) {
    cout << "Messaggio: " << msg << ", Numero: " << numero << "\n";
}

using namespace std;

int main()
{
    thread t(funzione_thread);  // Creazione di un thread
    thread t2(stampa_messaggio, "Hello, Thread!", 42);

    t.join();  // Attende la terminazione del thread
    //t.detach();
    t2.join();

    cout << "Ciao dal main!\n";
    return 0;

}
