

#include<iostream>

using namespace std;

main()
{
   int n, c, primero = 0, segundo = 1, siguiente;

   cout << "Introduce el numero de elementos que quieres ver >>> " << endl;
   cin >> n;

   cout << "Los primeros " << n << " elementos de la sucesión de Fibonacci son:  " << endl;

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         siguiente = c;
      else
      {
         siguiente = primero + segundo;
         primero = segundo;
         segundo = siguiente;
      }
      cout << siguiente << endl;
   }

   return 0;
}
