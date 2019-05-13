#include <omp.h>
#include <iostream>
using namespace std;

int main () {

    const int N = 10;
    int i;
    float a[N], b[N], c[N];

    // Inicjalizacja
    for (i=0; i < N; ++i)
          a[i] = b[i] = i * 1.0;

    // Zrownoleglij wykonanie ponizszej petli
     for (i=0; i<N; ++i)
     {
           c[i] = a[i] + b[i];
     }


for (i=0; i<N; ++i)
   cout << "c[" << i << "] = " << c[i] << endl;

}
