#include <stdio.h>

void imprime( int* arr, size_t elems )
{
   printf( "Dentro de la función imprime(): \n" );

   printf( "Valor de arr antes de entrar al ciclo: %p\n", arr );

   for( size_t i = 0; i < elems; ++i )
   {
      printf( "*arr=%d\n", *arr );

      *arr = *arr + 10;
      // también funciona: *arr += 10

      ++arr;
   }

   printf( "Valor de arr después del ciclo:        %p\n\n", arr );
}


int main(void)
{
   int lista[ 3 ] = { 1, 2, 3 };

   int* p = lista;

   printf( "El primer valor en lista[] es: %d\n", lista[0] );
   printf( "La dirección de lista[] es:    %p\n\n", lista );

   printf( "El valor almacenado en p es: %p\n", p );
   printf( "El valor al que apunta p es: %d\n", *p );
   printf( "La dirección de p es:        %p\n\n", &p );

   printf( "A punto de llamar a imprime( p, 3 )...\n\n" );
   imprime( p, 3 );
   printf( "Regresando de imprime( p, 3 )...\n\n" );

   printf( "El valor al que apunta p es: %d\n", *p );
   printf( "El valor almacenado en p es: %p\n", p );
   printf( "La dirección de p es:        %p\n\n", &p );
}
