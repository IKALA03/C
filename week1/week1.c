#include <stdio.h>

void print_function( char letter );
int ctr;

int print_it( void )
{
    char star = '*';
    char dash = '-';
    int i;
    for (i=0; i<10; ++i) {
        for (ctr = 0 ; ctr < 10; ctr++ )
        {
            print_function( star );
            print_function( dash );
            printf("\n");
        }
    }
    return 0;
}

void print_function ( char letter )
{
    for ( ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}