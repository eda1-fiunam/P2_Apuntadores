/* Imprimiendo direcciones */

#include <stdio.h>
// para printf()

void CambiaValorPorReferencia( int* p )
{
   printf( "(5) El valor de p es: %p, su dirección es: %p, y el valor al que apunta es: %d\n", p, &p, *p );

   *p = 34;
}

int main()
{
   int intVar1 = 250;
   printf( "(1) El valor de intVar1 es: %d y su dirección es: %p\n", intVar1, &intVar1 );

   int intVar2 = -400;
   printf( "(2) El valor de intVar2 es: %d y su dirección es: %p\n", intVar2, &intVar2 );

   int* pInt = &intVar1;
   printf( "(3) El valor de pInt es: %p, su dirección es: %p, y el valor al que apunta es: %d\n", pInt, &pInt, *pInt );

   pInt = &intVar2;
   printf( "(4) El valor de pInt es: %p, su dirección es: %p, y el valor al que apunta es: %d\n", pInt, &pInt, *pInt );

   CambiaValorPorReferencia( &intVar1 );
   printf( "(6) El nuevo valor de intVar1 es: %d\n", intVar1 );
}
