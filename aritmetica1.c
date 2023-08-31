/* Recorre un arreglo con el operador ++ */

#include <stdio.h>
// para printf()

#define TAM 5

int main()
{
   int arreglo[ TAM ] = { 0 };
   printf( "(1) La dirección de inicio de arreglo es: %p\n", arreglo );

   int* p = arreglo;
   printf( "(2) El valor de p es: %p y su dirección es: %p\n", p, &p );

   printf( "====\n" );
   for( size_t i = 0; i < TAM; ++i ){
      *p = i;

      printf( "     El valor arreglo[%ld] es: %d, y su dirección es: %p\n", i, arreglo[i], &arreglo[i] );
      printf( "El valor al que apunta p es: %d,     y su valor es: %p\n", *p, p );
      printf( "====\n" );

      ++p;
   }
   printf( "(3) El valor de p es: %p y su dirección es: %p\n", p, &p );
}
