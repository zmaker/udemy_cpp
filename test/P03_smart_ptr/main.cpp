#include <iostream>
#include <memory>  // Per smart pointer

using namespace std;

class Test {
public:
    Test() { cout << "Costruttore\n"; }
    ~Test() { cout << "Distruttore\n"; }
    void stampa() { cout << "Ciao da Test\n"; }
};

int main() {
    unique_ptr<Test> ptr = make_unique<Test>(); // Creazione sicura
    ptr->stampa();

    //unique_ptr<Test> ptr2 = ptr; // ERRORE: unique_ptr non può essere copiato
    unique_ptr<Test> ptr2 = move(ptr); // OK: Trasferimento di proprietà

    shared_ptr<Test> sptr1 = make_shared<Test>(); // Creazione sicura
    shared_ptr<Test> sptr2 = sptr1; // OK: Condivisione
    shared_ptr<Test> sptr3 = sptr1; // OK: Condivisione

    std::cout << "Conteggio riferimenti: " << sptr1.use_count() << endl;
    // Distruttore chiamato automaticamente quando il contatore arriva a 0
}
