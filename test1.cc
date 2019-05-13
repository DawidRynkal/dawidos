1111111111111#include <omp.h>
#include <iostream>
using namespace std;

int main () {

  int n_threads, thread_id;

  // Utworz blok rownolegly 4 watkow przekazujac kazdemu z nich kopie
  // zmiennej  n_threads oraz thread_id
  //
  // Do zmiennej thread_id przypisz numer biezacego watku
  // i ponizsza linia wypisze ten numer

     thread_id = ... ;
     cout << "Watek nr = " << thread_id << endl;

     // Niech watek glowny wykona ponizszy kawalek kodu
     if (thread_id == ... ) 
     {
          // Do n_threads przypisz liczbe watkow
          n_threads =  ... ;
          cout << "Liczba watkow = " << n_threads << endl;
     }

     // ### UWAGA powyzej w miejsca ... nalezy cos wpisac

}

