#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int get_random_int(int max_rand)
{
    return rand() % max_rand;
}


int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

double get_random_double()
{
    return (double) rand() / RAND_MAX;
}

double get_random_double_max(double max)
{
    return (double) rand() / RAND_MAX * max;
}

double get_random_double_min_max(double min, double max)
{
    return (double) rand() / RAND_MAX * (max - min) + min;
}

main()
{
    double mas[100];
    int n = 20, i;
    double max_rand;
    double min_rand;

    srand(time(0));

    for (i = 0; i < n; i++) {
        mas[i] = get_random_double_min_max(0, 50);
    }

    for (i = 0; i < n; i++) {
        printf("%3.3f\n", mas[i]);
    }
}
