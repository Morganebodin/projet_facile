#include <stdio.h>
int main( int argc, char* argv[] )
{
if( argc < 3 )
{
printf( "%s: Usage %s <argument_1> <argument_2>\n", argv[0], argv[0] );
return 40;
}
else
{
printf( "%s\n%s\n%s\n", argv[2], argv[1] , argv[3]);
}
return 0;
}
