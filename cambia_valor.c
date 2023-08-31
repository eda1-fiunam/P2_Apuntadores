
#include <stdio.h>

void CambiaValor( int* p );

int main()
{
   int tiempo = 256;
   int* pInt = &tiempo;

   printf( "tiempo (A)= %d\n", tiempo );
   printf( "&tiempo   = %p\n", &tiempo );

   printf( "pInt      = %p\n", pInt );
   printf( "&pInt     = %p (los apuntadores también tienen una dirección)\n", &pInt );
   printf( "*pInt     = %d\n", *pInt );

   CambiaValor( &tiempo );

   printf( "tiempo (D)= %d\n", tiempo );

   printf( "-----\n"
           "(A) Antes, (D) Después\n" );
}

void CambiaValor( int* dir )
{
   printf( "dir       = %p\n", dir );
   printf( "*dir   (A)= %d\n", *dir );

   *dir = 1000;

   printf( "*dir   (D)= %d\n", *dir );
}
