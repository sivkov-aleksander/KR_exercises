#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("+--------+--------+\n");
    printf("+  fahr  + celcius+\n");
    printf("+--------+--------+\n");
    for (fahr = lower; fahr <= upper; fahr += step) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("|%8.0f|%8.0f|\n", fahr, celsius);
    }

    printf("+--------+--------+\n");
    return 0;
}
