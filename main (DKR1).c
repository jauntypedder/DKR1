#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, sum = 0;
    int N;

    do
    {
        printf ( "Enter N\n" );
        scanf ( "%d", &N );
    }
    while ( N < 0 );

    printf ( "Enter a\n" );
    scanf ( "%lf", &a );

    for ( int n = 0; n <= N; n++ )
    {

        int minus_one_n = -1;
        if ( n == 0 || n % 2 == 0 )
        {
            minus_one_n = 1;
        }

        double a_in_power_of_2n = 1;
        for ( int i = 0; i < 2*n; i++ )
        {
            if (2 * n == 0)
            {
                break;
            }
            a_in_power_of_2n = a_in_power_of_2n * a;
        }
        if ( a < 0 )
        {
            a_in_power_of_2n = -a_in_power_of_2n;
        }

        int factorial_of_2n = 1;

        for ( int i = 2; i <= 2 * n; i++ )
        {
            factorial_of_2n = factorial_of_2n * i;
        }

        sum += minus_one_n * ( a_in_power_of_2n / factorial_of_2n );
    }
    printf( "Sum = %lf\n", sum );
    return 0;
}


