#include <stdlib.h>
#include <stdio.h>

void f( float** p )
{
   printf( "(3) **p = %0.2f\n", **p );
   printf( "(4)  *p = %p\n", *p );
   printf( "(5)   p = %p; &p = %p\n", p, &p );

   *p = NULL;
   // modificamos la dirección almacenada en p

   printf( "(6)  *p = %p\n", *p );
   printf( "(7)   p = %p; &p = %p\n", p, &p );
}

int main()
{
   float val = 3.14;

   float* p_float = &val;

   printf( "(1)     val = %0.2f;               &val = %p\n", val, &val );
   printf( "(2) p_float = %p; &p_float = %p\n", p_float, &p_float );

   f( &p_float );
   // pasamos la dirección del apuntador
   
   printf( "(8) &val = %p\n", p_float );
   // ¿Qué imprime?

   // ¿Qué sucede si descomentas y ejecutas la siguiente línea? Explica:
   //printf( "val = %0.2f\n", *p_float );
}
