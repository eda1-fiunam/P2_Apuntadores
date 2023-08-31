/* Recorre un arreglo utilizando base + desplazamiento */

#include <stdio.h>
// para printf()

#define TAM 5

int main()
{
   int arreglo[ TAM ] = { 0 };
   printf( "(1) La dirección de inicio de arreglo es: %p\n", arreglo );

   printf( "====\n" );
   for( size_t i = 0; i < TAM; ++i ){
      *(arreglo + i) = i * 250;

      printf( "  arreglo[%ld]= %d,   &arreglo[%ld]= %p\n", i, arreglo[i], i, &arreglo[i] );
      printf( "*(arreglo+%ld)= %d, (arreglo + %ld)= %p\n", i, *(arreglo + i), i, arreglo + i );
      printf( "====\n" );
   }
   printf( "(2) La dirección de inicio de arreglo es: %p\n", arreglo );
}
