#include <stdio.h>


void f( float** p )
{
   printf( "(2) **p = %0.2f\n", **p );
   printf( "(3) *p  = %p\n", *p );
   printf( "(4) p   = %p\n", p );

   *p = NULL;

   printf( "(5) *p  = %p\n", *p );
   printf( "(6) p   = %p\n", p );
}

int main()
{
   float val = 3.14;

   float* p_float = &val;

   printf( "(1) &val = %p\n", p_float );

   f( &p_float );
   
   printf( "(7) &val = %p\n", p_float );


   // ¿Qué sucede si descomentas y ejecutas la siguiente línea? Explica:

   printf( "val = %0.2f\n", *p_float );
}

