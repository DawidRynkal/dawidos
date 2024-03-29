
2222222222222222#include <omp.h>
#include <iostream>
#include <thread>
using namespace std;

int main () {

  // Tak zmodyfikuj ponizszy program, zeby linia wypisywana na ekran 
  // I am in a master thread, my id is = 0
  // czyli byla wykonana tylko przez master thread
  // W miejsce ... uzyj odpowiedniej procedury
  // Wszystkie watki maja tylko wykonac sleep_for
  // UWAGA prosze pamietac o kompilowaniu z opcja -std=c++11 lub wyzsze c++14, c++17

  #pragma omp parallel num_threads(8)
  {
      this_thread::sleep_for(1s);
      cout << "I am in a master thread, my id is = " << ... << endl;
  }  

}

