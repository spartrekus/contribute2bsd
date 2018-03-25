
#include <stdio.h>
#if defined(__linux__)
#define MYOS 1
#elif defined(_WIN32)
#define MYOS 2
#elif defined(_WIN64)
#define MYOS 3
#elif defined(__unix__)
#define MYOS 4
#define PATH_MAX 2500
#else
#define MYOS 0
#endif

#include <string.h>
#include <string.h>
#include <stdlib.h>


int main( int argc, char *argv[])
{
     ////////////////////////////////////////////////////////
     if ( argc == 2)
     if ( strcmp( argv[1] , "get" ) ==  0 )
     {
         system( "  svn checkout https://svn.FreeBSD.org/base " );
         return 0;
     }
}



