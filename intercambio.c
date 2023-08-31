/* Intercambia valores */

#include <stdio.h>
// para printf()

void Intercambia( float *p1, float *p2 )
{
   printf( "(3) El valor de p1 es: %p, su dirección es: %p, y el valor al que apunta es: %f\n", p1, &p1, *p1 );
   printf( "(4) El valor de p2 es: %p, su dirección es: %p, y el valor al que apunta es: %f\n", p2, &p2, *p2 );

   float temp = *p1;
   *p1 = *p2;
   *p2 = temp;
}


int main()
{
   float floatVar1 = 3.14;
   printf( "(1) El valor de floatVar1 es: %f y su dirección es: %p\n", floatVar1, &floatVar1 );

   float floatVar2 = 6.28;
   printf( "(2) El valor de floatVar2 es: %f y su dirección es: %p\n", floatVar2, &floatVar2 );

   Intercambia( &floatVar1, &floatVar2 );
   printf( "(5) El nuevo valor de floatVar1 es: %f y el de floatVar2 es: %f\n", floatVar1, floatVar2 );

   printf( "\nEl tamaño de un entero es %ld\n",     sizeof( int ) );
   printf( "El tamaño de las direcciones es %ld\n", sizeof( int* ) );
   printf( "El tamaño de las direcciones es %ld\n", sizeof( char* ) );

}
