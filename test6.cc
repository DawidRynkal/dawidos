#include <omp.h>
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void fun( int t ) {
  this_thread::sleep_for(chrono::seconds(t));
}

// Ponizszy program wykonuje sie w czasie nieco ponad 24 sekundy.
// Przepisz go tak, zeby za pomoca konstrukcji typu zadanie (task)
// wykonywal sie niewiele dluzej niz 5 sekund, zakladajac ze mamy
// do wykorzystania 6 lub wiecej watkow

int main () {
           fun(3); 
           fun(3); 
           fun(4); 
           fun(4); 
           fun(5); 
           fun(5); 
}


